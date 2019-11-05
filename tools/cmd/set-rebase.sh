#!/bin/bash

from=$1
target=$2

function user_help()
{
    echo -e "\n===================================================="
    echo "   e.g: set-rebase <from branch> <target branch>"
    echo "===================================================="
}

#if [ !$from ] ; then
#    echo -e "\n\033[1;31m no from branchs\033[0m"
#    user_help
#    exit 0
#fi
#
#if [ !$target ] ; then
#    echo -e "\n\033[1;31m no target branchs\033[0m"
#    user_help
#    exit 0
#fi

echo -e "\n\033[1;31mrebase branch from \033[1;33m$from\033[1;31m to \033[1;32m$target\033[0m"

echo -e "\n\033[1;32mgit fetch from branch!!!\033[0m"
git fetch $(repo-remote) $from
echo -e "033[1;32mgit fetch target branch!!!\033[0m"
git fetch $(repo-remote) $target
echo -e "\n\033[1;32mgit checkout to target branch!!!\033[0m"
git checkout $target

echo -e "\n\033[1;32mget the diff patch list\033[0m"
repo-cherry-find-all -f  $from -t $target

echo -e "\n\033[1;32mcherry-pick the patch\033[0m"
#repo-cherry-pick-all '@smartisan|@bytedance|@deltainno|@ad.bytedance'
echo -e "\033[1;33mrepo-cherry-pick-all '@smartisan|@bytedance|@deltainno|@ad.bytedance'\033[0m"


echo -e "\n\033[1;32mgit push the patch to $target\033[0m"
echo -e "\033[1;32mpush the patch direct to the branch\033[0m"
echo -e "\033[1;33mgit push $(repo-remote) HEAD:refs/heads/$target\033[0m"
#echo "push the patch into gerrit"
#git push $(repo-remote) HEAD:refs/for/$target
