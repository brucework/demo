#!/bin/sh

echo "mount 172.16.2.16 to /mnt/share_16"
sudo mount -t cifs //172.16.2.16/share /mnt/share_16 -o username=$USER,password=T123.blw,domain=smartisan.cn

echo "mount 172.16.2.240 to /mnt/flash_240"
sudo mount -t cifs //172.16.2.240/flash /mnt/flash_240 -o username=$USER,password=T123.blw,domain=smartisan.cn

echo "mount 172.16.2.17 to /mnt/share"
sudo mount -t cifs //172.16.2.17/share /mnt/share_17 -o username=$USER,password=T123.blw,domain=smartisan.cn

echo "mount 172.16.2.17 to /mnt/share_225"
sudo mount -t cifs //172.16.2.225/SW_Test /mnt/SW_Test_225 -o username=$USER,password=T123.blw,domain=smartisan.cn

echo "mount 172.16.26.22 to /mnt/flash_22"
sudo mount -t cifs //172.16.2.225/SW_Test /mnt/flash_22 -o username=bspsystem,password=bspsystem