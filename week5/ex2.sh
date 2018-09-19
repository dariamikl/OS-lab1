#!/bin/bash

counter=0

while [ $counter -le 100 ]
do
	if `ln num.txt num.txt.lock`;  then
		counter=`expr $counter + 1`
		number=`tail -1 num.txt`
		expr $number + 1 >> num.txt
		rm num.txt.lock
	fi
done