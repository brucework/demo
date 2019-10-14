#!/bin/bash
debug=~/work/
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

echo $1
if [ $2 ] ; then
	debug=~/work/1T-work/debug/$2
	echo $debug
fi

if [ xxx$1 == "xxx" ]; then
    echo xxx$1
else
    path=~/work/4T-work/debug/$1
    cd $path
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
