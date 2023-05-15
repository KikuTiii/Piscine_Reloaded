#!/bin/sh
ifconfig -a | grep ether | sed 's/ *ether//; s/^//' | awk '{print $1}'
