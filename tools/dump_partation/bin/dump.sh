#!/bin/sh

# This is edl flash shell script for surabaya/colombo.
# Make sure you phone can "adb reboot edl" to edl mode,
# or enter edl mode by yourself.Enjoy your caffee time.

adb devices |  sed -n 2p | grep device > /dev/null
if [ $? = 0 ]; then
    adb reboot edl
    sleep 2
fi

loop_time=0
lsusb | grep 'QDL mode'
while [ $? != 0 ]
do
    echo "wait for COM(9008)"
    sleep 2
    loop_time=$(expr $loop_time + 1)
    if [ $loop_time = 10 ]; then
        echo "###################################"
        echo "######   No Device Found!!   ######"
        echo "###################################"
        exit 1
    fi
    lsusb | grep 'QDL mode'
done

port_num=$(ls /sys/bus/usb-serial/drivers/qcserial/ | grep tty)

script_dir=`dirname "$0"`

$script_dir/apps/QSaharaServer -p /dev/$port_num -s 13:$script_dir/../image/prog_firehose_ddr.elf
$script_dir/apps/fh_loader --port=/dev/$port_num --sendxml=rawprogram0_full_flash.xml --search_path=$script_dir --noprompt --showpercentagecomplete --zlpawarehost=1 --convertprogram2read --memoryname=EMMC

$script_dir/apps/fh_loader --port=/dev/$port_num --noprompt --showpercentagecomplete --zlpawarehost=0 --memoryname=eMMC --setactivepartition=0 --reset
echo "###################################"
echo "######  EDL Erase Done!!!  ########"
echo "###################################"
