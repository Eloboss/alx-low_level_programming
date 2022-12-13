#!/bin/bash
wget -P /tmp https://github.com/Eloboss/alx-low_level_programming/raw/master/0x18-dynamic_libraries/anonymous.so
export LD_PRELOAD=/tmp/anonymous
