# !/bin/sh
echo "enter operand1"
read a
echo "enter operand2"
read b
echo "please choose an operation"
echo "addition(+)"
echo "subtraction(-)"
echo "division(/)"
echo "multiplication(*)"
read op
case $op in
	'+')y=`expr $a + $b`
		echo "sum=$y";;
	'*')y=`expr $a \* $b`
	echo "product=$y";;
        '-')y=`expr $a - $b`
	echo "difference=$y";;
        '/')if [ $b -eq 0 ]
	then 
	echo "division not possible"
        else
	 y=`expr $a / $b`
         echo "quotient=$y"
 fi;;
        *)echo "enter valid choice";;
esac
