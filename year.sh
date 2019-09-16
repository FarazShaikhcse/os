#!/bin/sh
echo Enter a year of your choice
read a
x=`expr $a % 400 `
y=`expr $a % 100 `
z=`expr $a % 4 `
if [ $x -eq  0 ] || [ $y -ne 0 ] && [ $z -eq 0 ]
then
	echo It is a leap year
else
	echo It is not a leap year
fi

