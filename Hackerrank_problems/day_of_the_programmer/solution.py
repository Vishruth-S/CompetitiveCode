#!/bin/python3

import math
import os
import random
import re
import sys

# LOGIC
# First we check if the year is 1918 the return 26.09.1918
# The if it not so then if year is (less then 1917 and divisible by 4) or (year greater then 1918 and divisible by 400
# or year divisible by 4 and not by 100 the the date will be 12.09. + given year.
# Else we will return 13.09. + given year.


# The dayOfProgrammer function below Returns the Date as per given Year. Takes Year as input.
def dayOfProgrammer(year):
    if year == 1918:                    
        return '26.09.1918'
    elif ((year <= 1917) & (year%4 == 0)) or ((year > 1918) & (year%400 == 0 or ((year%4 == 0) & (year%100 != 0)))):
        return '12.09.'+str(year)      
    else:
        return '13.09.'+str(year)



# Checking if this is main and then running the main program.
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())         # Getting the Year as Input.

    result = dayOfProgrammer(year)      # Calling the dayofprogrammer function. It takes year as argument.

    fptr.write(result + '\n')           # Printing the result.

    fptr.close()
