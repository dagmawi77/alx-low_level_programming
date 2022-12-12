#!/bin/bash
wget -q --output-document=$HOME/lib101-makemewin.so https://github.com/dagmawi77/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=$HOME/lib101-makemewin.so
