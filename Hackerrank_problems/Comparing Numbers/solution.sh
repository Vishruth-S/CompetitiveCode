#! /usr/bin/bash
# accept two numbers with each read command and compare nums with conditional operators
read num1
read num2
if [[ $num1 > $num2 ]]
then
	echo X is greater than Y
elif [[ $num1 < $num2 ]]
then
	echo X is less than Y
else
	echo X is equal to Y
fi
