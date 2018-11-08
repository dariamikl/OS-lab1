#!/usr/bin/env bash
gcc ex2.c
sysctl -a | grep machdep.cpu |  ./a.out -a ex2.txt #analog of /proc/cpuinfo on mac os