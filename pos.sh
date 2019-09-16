#!/bin/sh
echo "Enter the string:"
read str
if [ -z $str ]
then
	echo "Invalid String"
else
	y=`expr "$str" : '.*'`
	echo "Length is $y"
	if [ $y -gt 6 ]
	then
		z=`expr "$str" : '\(...\).*'`
		echo "$z"
	else
		echo "not possible"
	fi
fi
echo "Enter the char"
read ch
if [ -z $ch ]
then 
	echo "Error!!"
else
	r=`expr "$str" : '[^ '$ch' ]*'$ch`
	echo "position: $r"
fi

	

