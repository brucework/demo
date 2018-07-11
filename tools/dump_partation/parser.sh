#!/bin/bash

workdir=$PWD
dump=$PWD/dump-image
image=$PWD/image
unpack=$PWD/unpack-ramdisk
cmd_dir=$PWD/bin

function usage(){
    echo "=============== Help Info ================"
	echo "  -c clean the release"
    echo "  "
    echo "exp: ./parser.sh -c"
}

#echo "bruceWORK_DIR:$WORK_DIR"
while getopts "ci" arg
do
	case $arg in
		c)
        rm unpack-ramdisk  dump-image -rf
        exit 0
		;;
		?)
		usage
		exit 1
		;;
	esac
done

############### dump the image from the devices ###############
function dump_image()
{
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

    mkdir $dump
    cd $dump 
    ln -s $image/rawprogram0_full_flash.xml rawprogram0_full_flash.xml

    port_num=$(ls /sys/bus/usb-serial/drivers/qcserial/ | grep tty)
    
    #cmd_dir=`dirname "$0"`

    $cmd_dir/apps/QSaharaServer -p /dev/$port_num -s 13:$cmd_dir/../image/prog_firehose_ddr.elf
    $cmd_dir/apps/fh_loader --port=/dev/$port_num --sendxml=rawprogram0_full_flash.xml --search_path=$cmd_dir --noprompt --showpercentagecomplete --zlpawarehost=1 --convertprogram2read --memoryname=EMMC
    
    $cmd_dir/apps/fh_loader --port=/dev/$port_num --noprompt --showpercentagecomplete --zlpawarehost=0 --memoryname=eMMC --setactivepartition=0 --reset

    rm rawprogram0_full_flash.xml -rf
    cd -
    echo "###################################"
    echo "######  EDL Dump Done!!!  ########"
    echo "###################################"
}
### dump END ###

############### get the file name ###############
function create_files()
{
    image_name=$(dir $dump)

    mkdir $unpack

    for i in ${image_name[@]}
    do
        echo $i
        if [ -f $d#ck-ramdisk/ump_image ]; then
            echo $i
        else
            echo "mkdir $i"
            mkdir $unpack/$i
        fi
        cp $dump/$i $unpack/$i/ -nr
    done
}

############### split image ###############
function split_image()
{
    image_name=$(dir $unpack)
    for i in ${image_name[@]}
    do
        cd $unpack/$i
        $cmd_dir/mysplit_bootimage $i
        cd -
    done
}

############### unpack ramdisk ###############
function unpack_ramdisk()
{
    image_name=$(dir $unpack)
    for i in ${image_name[@]}
    do
        cd $unpack/$i
        gzip -dc ${i}-ramdisk.gz | cpio -i
        cd -
    done
   
}

### dump the image int to dump-image ###
dump_image

### get image name ###
create_files

### split image ###
split_image

### unpack ramdisk ###
unpack_ramdisk
