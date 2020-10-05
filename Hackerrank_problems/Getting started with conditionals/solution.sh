#! /usr/bin/bash
read string
if [[ "$string" == "n" ]] || [[ $string == "N" ]]
then
	echo NO
elif [[ "$string" == "Y" ]] || [[ "$string" == "y" ]]
then
	echo YES
fi

