#!/bin/bash
wget -P /tmp https://github.com/richie-omondi/alx-low_level_programming/blob/master/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
