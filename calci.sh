#!/bin/sh
echo "Calculating options are:\n
      + ---> addition\n
      - ---> subtraction\n
      * ---> multiplication\n
      / ---> division\n
      % ---> modulus\n"
echo "Enter 2 numbers"
read a b
echo "Enter your choice:"
read ch
case $ch in
	'+')y=`expr $a + $b`
		echo "Sum=$y";;
	'-')y=`expr $a - $b`
		echo "Difference=$y";;
	'*')y=`expr $a \* $b`
		echo "Product=$y";;
	'/')y=`expr $a / $b`
		echo "Quotient=$y";;
	'%')y=`expr $a % $b`
		echo "Modulo=$y";;
	*)echo "Enter a valid choice"
esac		
       
