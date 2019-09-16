#!/bin/sh
echo Enter the name
read n
if [ -z "$n" ]
then
	echo "Null String"
else
	z=`expr "$n" : '.*'`
	echo "String length is $z"
if [ $z -ge 6 ]
then
        echo "First three characters are:"
        m=`expr "$n" : '\(...\).*'`
        echo "$m"
	echo "Last three characters are:"
	p=`expr "$n" : '.*\(...\)'`
	echo "$p"
fi
fi


