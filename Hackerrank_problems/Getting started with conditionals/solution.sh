#! /usr/bin/bash
# accept a string and check if it is n,N or Y,y,return "NO" or "YES" respectively. 
read string
if [[ "$string" == "n" ]] || [[ $string == "N" ]]
then
	echo NO
elif [[ "$string" == "Y" ]] || [[ "$string" == "y" ]]
then
	echo YES
fi
