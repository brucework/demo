#!/bin/bash

MYCFLAGS=

#MINICOM=sudo minicom

function usage(){                                                                                                                                                                                       
    echo "=============== Help Info ================"
    echo "  -C, --capturefile=FILE : start capturing to FILE "
    echo "  -D, --device           : set device name (ignore the value from config) "
    echo "  "
    echo "  .e.g: get-uart -D /dev/ttyUSB0 -C log.txt"
}
 
#if [ $# -eq 0 ]
#then
#    usage
#    exit 0
#fi

while getopts "C:D:i" arg
do
    case $arg in
        C)
        MYCFLAGS=$MYCFLAGS" -C "$OPTARG
        echo $MYCFLAGS
        ;;
        D)
        MYCFLAGS=$MYCFLAGS" -D "$OPTARG
        echo $MYCFLAGS
        ;;
        ?)
        usage
        exit 0
        ;;
    esac
done

sudo minicom $MYCFLAGS
