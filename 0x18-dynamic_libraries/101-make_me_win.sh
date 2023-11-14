#!/bin/bash
wget -P ..  https://rawgithubusercontent.com/BukeeRuth/alx-low_level_programming/master/0x18-dynamic_libraries/libgaga.so
export LD_PRELOAD="$PWD/../libgaga.so"
