#!/bin/bash

debug=~/work/debug/ocean
ramdump=~/work/ramdump
image=~/work/image
code=~/work/ocean
tool=~/work/debug/tool
filename=`date "+%Y%m%d"`


function usage()
{
    echo "=============== Help Info ================"
    echo "  .e.g: get-uart [debug|ramdump|image|code|tool]"
    echo " debug  :~/work/debug/ocean"
    echo " ramdump:~/work/ramdump"
    echo " image  :~/work/image"
    echo " code   :~/work/ocean"
    echo " tool   :~/work/debug/tool"
}

function check_file()
{
    if [ ! -d $filename ]; then
        echo "create the file '$filename' ! "
        mkdir $filename
    else
        echo "'$filename' existence!"
    fi
}


if [ $# -eq 0 ]
then
    usage
fi

if [ $1 == "debug" ]; then
    cd $debug
    check_file
fi

if [ $1 == "image" ]; then
    cd $image
fi

if [ $1 == "ramdump" ]; then
    cd $ramdump
    check_file
fi

if [ $1 == "code" ]; then
    cd $code
fi

if [ $1 == "tool" ]; then
    cd $tool
fi

