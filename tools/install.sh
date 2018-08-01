#!/bin/bash

function install_ctags()
{
    echo "Install ctags tools"
    sudo apt-get install ctags
}

function install_vim()
{
    echo "Install vim tools"
    sudo apt-get install vim vim-scripts vim-gtk vim-gnome

    echo "Config the vim"
    #cp ./vim/vimrc ~/.vimrc
}

function install_cscopy()
{
    echo "Install cscopy"
    sudo apt-get install cscopy
}
install_vim
install_ctags

