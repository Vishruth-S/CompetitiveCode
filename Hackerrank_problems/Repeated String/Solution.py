#!/bin/python3

import math
import os
import random
import re
import sys


#line 20 - 22 counts the number of "a" in a full string, and in the last, potentially partial string,
# and calculates the total amount of "a" based on that.
# "a" count of full string * number of string repeats + "a" count of last string.
def repeatedString(s, n):
    t=0                                          #Initialize t = 0 so we can count 'a' in the string
    t=s.count('a')
    print(t)
    t*=n//len(s)                                 
    print(t)
    t+=s[0:n%len(s)].count('a')
    print(t)
    return t

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())                             # n is the number of character the infite string will contain

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
