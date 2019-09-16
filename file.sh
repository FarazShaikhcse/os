#!/bin/sh
echo "Enter two file names:"
read f1 f2
if [ -e $f1 -a -e $f2 ]
then
	p1=`ls -l $f1 | cut -c 2-10`
	p2=`ls -l $f2 | cut -c 2-10`
	echo "$f1 : $p1"
	echo "$f2 : $p2"
	if [ "$p1" = "$p2" ]
	then
	        echo "$f1 and $f2 have same permissions"
                echo "$p1"
	else
		echo "Permission for $f1"
		echo "$p1"
		echo "Permission for $f2"
	        echo "$p2"
	fi
else
        echo "Invalid filename"
fi	
        


