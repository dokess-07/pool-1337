#!/bin/sh
ifconfig  | grep -W ether | awk '{print $2}' 
