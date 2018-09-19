#!/bin/bash

for i in {0..1000}
do
	if `ln numbers.txt numbers.txt.lock`;  then
		number=`tail -n 1 numbers.txt`
		((number++))
		echo "$number" >> numbers.txt
		rm numbers.txt.lock
	fi
done