#!/bin/bash

socks_path=$HOME/tools/shadowsocks

mkdir $socks_path
cp $PWD/shadowsocks-ubuntu/socks-json/shadowsocks.json $socks_path -rf 

sudo apt-get install python-pip

pip install shadowsocks

sudo apt install shadowsocks

######
#
# Add "sslocal -c $HOME/tools/shadowsocks/shadowsocks.json  &" into  $HOME/.profile
#
# #Init the sslocal when startup the system
# data=`ps -e | grep "sslocal" | awk '{print $4;}'`
# if [ "$data"x = "sslocal"x ]; then
#     echo "Don't need init sslocal"
# else
#     echo "Should init sslocal"
#     sslocal -c $HOME/tools/shadowsocks/shadowsocks.json &
# fi
#
# reboot
#
######
