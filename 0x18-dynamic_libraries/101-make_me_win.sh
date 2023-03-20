#!/bin/bash
wget -P /tmp https://github.com/Superstazdare/alx-low_level_programming/0x18-dynamic_libraries/giga.so
export LD_PRELOAD=/tmp/giga.so
