#!/bin/bash

# ensure apt is up to date
apt-get update

# fetch required libs and tools
apt-get install -y build-essential

# download and expand ncurses
wget http://ftp.gnu.org/pub/gnu/ncurses/ncurses-5.9.tar.gz
tar zxvf ncurses-5.9.tar.gz

# configure, make, make install
pushd ncurses-5.9/
./configure && make && make install
popd
