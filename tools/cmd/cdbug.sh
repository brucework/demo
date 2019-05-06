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
	cd $filename
}


if [ $# -eq 0 ]
then
    usage
fi

if [ $2 ] ; then
	debug=~/work/debug/$2
	echo $debug
fi

if [ a$1 == "adebug" ]; then
    cd $debug
    check_file
fi

if [ a$1 == "aimage" ]; then
    cd $image
fi

if [ a$1 == "aramdump" ]; then
    cd $ramdump
    check_file
fi

if [ a$1 == "acode" ]; then
    cd $code
fi

if [ a$1 == "atool" ]; then
    cd $tool
fi
echo $debug
echo $filename
cd $debug/$filename
