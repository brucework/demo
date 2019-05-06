#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# standard imports
import os
import os.path
import sys
import time
import re
import json

import datetime

username = "guest@smartisan.com"
password = "!@#$%odinosbornoxfordtrident"

# 导入selenium的浏览器驱动接口
from selenium import webdriver
from bs4 import BeautifulSoup

# 要想调用键盘按键操作需要引入keys包
from selenium.webdriver.common.keys import Keys

# 导入chrome选项
from selenium.webdriver.chrome.options import Options

global get_update

all_crash=[]

def find_log(_id):
	cwdir = os.getcwd()

	for root, dirs, files in os.walk(cwdir):
		for name in files:
			if name.lower().endswith('.log'):
				if root == cwdir and not '___' in name:
					if _id in name:
						return True

# 创建chrome浏览器驱动，无头模式（超爽）
def init_webdriver():
	SPROXY = 'socks5://127.0.0.1:1080'
	#return(webdriver.Firefox())
	#无头模式不显示浏览器界面
	chrome_options = Options()
	##chrome_options.add_argument('--proxy-server=%s' % SPROXY)
	##chrome_options.add_argument('--window-size=1820x980')
	chrome_options.add_argument('--headless')
	return(webdriver.Chrome(chrome_options=chrome_options))

## def init_crash_url():
##	   _tomorrow = datetime.date.today() + datetime.timedelta(days=1)
##	   _before30 = datetime.date.today() - datetime.timedelta(days=30)
##	   _crash='http://crashreport.smartisan.com/api/0/dropbox/items?app=kernel&from=%sT17:00:00.000Z&limit=12000&product=Trident&to=%sT17:00:00.000Z&version=all' % (_before30, _tomorrow)
##	   return(_crash)

def init_crash_url(_ver):
	_crash = ['','','']
	_to = datetime.date.today() + datetime.timedelta(days=1)
	_fr = datetime.date.today() - datetime.timedelta(days=30)
	_crash[0]='http://crashreport.smartisan.com/api/0/dropbox/items?app=kernel&from=%sT17:00:00.000Z&limit=12000&product=Trident&to=%sT17:00:00.000Z&version=%s' % (_fr, _to, _ver)

	_to = datetime.date.today() - datetime.timedelta(days=30)
	_fr = datetime.date.today() - datetime.timedelta(days=60)
	_crash[1]='http://crashreport.smartisan.com/api/0/dropbox/items?app=kernel&from=%sT17:00:00.000Z&limit=12000&product=Trident&to=%sT17:00:00.000Z&version=%s' % (_fr, _to, _ver)

	_to = datetime.date.today() - datetime.timedelta(days=60)
	_fr = datetime.date.today() - datetime.timedelta(days=90)
	_crash[2]='http://crashreport.smartisan.com/api/0/dropbox/items?app=kernel&from=%sT17:00:00.000Z&limit=12000&product=Trident&to=%sT17:00:00.000Z&version=%s' % (_fr, _to, _ver)
	return(_crash)

def login(webdrv):
	print("login ...")
	webdrv.get("http://crashreport.smartisan.com/login")
	time.sleep(3)
	
	input_user = webdrv.find_element_by_xpath('/html/body/div/div/div/div/div/div/div/form/div[1]/div/input').send_keys(username)
	input_pass = webdrv.find_element_by_xpath('/html/body/div/div/div/div/div/div/div/form/div[2]/div/input').send_keys(password)
	button_logon = webdrv.find_element_by_xpath('/html/body/div/div/div/div/div/div/div/form/button').click()
	time.sleep(3)

def get_data(webdrv):
	webdrv.set_window_size(1820, 980)
	#print(all_crash)
	for _crash in all_crash:
		webdrv.get(_crash)
		
		html = webdrv.page_source
		json_text = BeautifulSoup(html, 'lxml').get_text()
		json_crash = json.loads(json_text)
		
		for cr in json_crash["data"]:
			if "KERNEL_PANIC" == cr["tag"]:
				data_id = cr["_id"]
				url = 'http://crashreport.smartisan.com/api/0/dropbox/items/%s' % (data_id)
				#url = 'http://crashreport.smartisan.com/api/0/dropbox/items/%s' % (cr["_id"])
				#url='http://crashreport.smartisan.com/api/0/dropbox/items/5b28a78e362901150e8349d0'
				#print(url)

				if find_log(data_id) and True == get_update:
					continue

				webdrv.get(url)
				spage = webdrv.page_source
				ltext = BeautifulSoup(spage, 'lxml').get_text()
				jdata = json.loads(ltext)

				_at = jdata["occurred_at"]
				dev = jdata["device_id"]
				ver = jdata["version"]
				print('%s > panic_%s_%s_%s.log' % (url, ver, _at, dev))
				with open('panic_%s_%s_%s_%s.log' % (data_id, ver, _at, dev), 'w') as fio:
					try:
						fio.write(jdata["data"]["content"])
					except KeyError as e:
						print(e)
				fio.close()

def exit_web(webdrv):
	webdrv.quit()

if __name__=='__main__':

	version = 'all'
	get_update = True
	for argv in sys.argv:
		if argv == '--force':
			get_update = False 
		else:
			regex = re.compile(r'^\d{1}(\.\d{1}){2,3}\-20\d{8}$')
			ver_chk = re.match(regex, argv)
			if ver_chk:
				version = sys.argv[1]

	#print(version)
	#sys.exit()
	all_crash = init_crash_url(version)
	#sys.exit()
	webdrv = init_webdriver()
	login(webdrv)
	get_data(webdrv)
	exit_web(webdrv)
	sys.exit()

