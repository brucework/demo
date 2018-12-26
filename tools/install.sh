#!/bin/bash

LOCAL_BIN=/usr/local/bin/

function install_vim()
{
    echo "Install vim tools"
    sudo apt-get install vim vim-scripts vim-gtk vim-gnome

    echo "Config the vim"
    cp ./vim/vimrc ~/.vimrc
}

function install_ctags()
{
    echo "Install ctags tools"
    sudo apt-get install ctags
}

function install_cscope()
{
    echo "Install cscopy"
    sudo apt-get install cscope
}

function _init()
{
    echo "Init the tools config!"
    if [ ! -f "$HOME/tools" ];then
        mkdir -p $HOME/tools
    fi
}

_init

./shadowsocks-ubuntu/shadowsock-config.sh
#sudo apt-get update

#install_vim
#install_ctags
#install_cscope