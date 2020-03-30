#!/bin/bash

LOCAL_BIN=/usr/local/bin/
VIM_PATH=~/.vim
TMP=.tmp

function download_tools()
{
    # Download  the NERDTree tools
    wget http://www.vim.org/scripts/download_script.php?src_id=17123 -O $TMP/nerdtree.zip

    if [ -e $TMP/nerdtree.zip ] ; then
        echo "Download ok"
    else
        echo "NERDTree Download Failed!"
    fi

    #1. Download the latest Taglist (web address)
    # https://sourceforge.net/projects/vim-taglist/files/latest/download?source=files
    #2. Install taglist
    unzip taglist_46.zip -d ./$TMP
    # sudo cp doc/taglist.txt /usr/share/vim/vim80/doc/ -rf
    # sudo cp plugin/taglist.vim /usr/share/vim/vim80/plugin/ -rf
    #3. Config taglist
    # vim ~/.vimrc
    # " Config taglist
    # let Tlist_Auto_Open = 1
    # let Tlist_Ctags_Cmd = '/usr/bin/ctags'
    # let Tlist_Show_One_File = 1
    # let Tlist_Exit_OnlyWindow = 1
    # set tags=tags

    #1. Download the latest WinManager
    # http://www.vim.org/scripts/download_script.php?src_id=754
    #2. Install WinManager
    unzip winmanager.zip -d ./$TMP
    # sudo cp doc/winmanager.txt /usr/share/vim/vim80/doc/ -rf
    # sudo cp plugin/winmanager.txt /usr/share/vim/vim80/plugin/ -rf
    # sudo cp plugin/wintagexplorer.txt /usr/share/vim/vim80/plugin/ -rf
    # sudo cp plugin/winfileexplorer.txt /usr/share/vim/vim80/plugin/ -rf
    #3. Config WinManager
    # " Config WinManager
    # let g:winManagerWindowLayout=’FileExplorer|TagList’
    # let g:miniBufExplorerMoreThanOne=0
    # let g:winManagerWidth=30
    # nmap wm :WMToggle<cr>
    # map <silent> <F2> :WMToggle<cr>

}

function install_tools()
{
    echo "\nInstall NERDTree...\n"
    unzip nerdtree.zip -d $VIM_PATH

}


function install_vim()
{
    echo "Install vim tools"
    sudo apt-get install vim vim-scripts vim-gtk vim-gnome

    echo "Config the vim"
    cp ./vim/vimrc ~/.vimrc

    echo "Install meld tools"
    sudo apt-get install meld
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
    mkdir -p $HOME/tools
    if [ ! -f "$HOME/tools" ];then
        mkdir -p $HOME/tools/bin
    fi

    mkdir -p $VIM_PATH
    mkdir -p $TMP

}

echo "**************** Install Tools ****************"

_init
#./shadowsocks-ubuntu/shadowsock-config.sh
#sudo apt-get update

install_vim
install_ctags
install_cscope

download_tools
install_tools

