#!/bin/python3

import os
import sys

def halloweenParty(k):
    """
    first square the amount times 
    then divide it with the 2 squares (or 4)
    *don't forget to round down the float
    """
    return int((k*k)/4)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        k = int(input())

        result = halloweenParty(k)

        fptr.write(str(result) + '\n')

    fptr.close()
