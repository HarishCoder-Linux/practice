#!/bin/sh

CPU=$(sed -n 's/^cpu\s//p' /proc/stat) 
IDLE=$((sed -n 's/^cpu\s//p' /proc/stat)| (cut -d' ' -f5))
printf "IDLE Check %s \n" $IDLE
printf "CPU: %s \n" $CPU


