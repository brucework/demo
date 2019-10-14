#!/bin/sh

echo "mount 172.16.2.16 to /mnt/share_16"
sudo mount -t cifs //172.16.2.16/share /mnt/share_16 -o username=$USER,password=T123.blw,domain=smartisan.cn,vers=1.0

echo "mount 172.16.2.240 to /mnt/flash_240"
sudo mount -t cifs //172.16.2.240/flash /mnt/flash_240 -o username=$USER,password=T123.blw,domain=smartisan.cn,vers=1.0

echo "mount 172.16.2.17 to /mnt/share"
sudo mount -t cifs //172.16.2.17/share /mnt/share_17 -o username=$USER,password=T123.blw,domain=smartisan.cn,vers=1.0

echo "mount 172.16.2.17 to /mnt/share_225"
sudo mount -t cifs //172.16.2.225/SW_Test /mnt/SW_Test_225 -o username=$USER,password=T123.blw,domain=smartisan.cn,vers=1.0

echo "mount 172.16.2.17 to /mnt/flash_225"
sudo mount -t cifs //172.16.2.225/flash /mnt/flash_225 -o username=$USER,password=T123.blw,domain=smartisan.cn,vers=1.0

echo "mount 172.16.26.22 to /mnt/flash_22"
sudo mount -t cifs //172.16.26.22/flash /mnt/flash_22 -o username=bspsystem,password=bspsystem,vers=1.0

echo "mount /dev/sdb1 to ~/work/4T-work"
sudo mount -t ext4 -o rw,nosuid,nodev,relatime,data=ordered /dev/sdb1 ~/work/4T-work/

echo "mount /dev/sda1 to ~/work/1T-work"
sudo mount -t ext4 -o rw,nosuid,nodev,relatime,data=ordered /dev/sda1 ~/work/1T-work/
