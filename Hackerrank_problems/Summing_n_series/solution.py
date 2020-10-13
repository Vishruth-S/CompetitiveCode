#!/bin/python3

import os
import sys

def summingSeries(n):
    """
    the formula it's self if tn = n^2 - (n-1)^2
    sn = t1+ t2 + ... + tn
    but if we look it closely we can make a shortcut by 
    just returning the last n^2 
    
    next it's said that it's needed to be mod(10^9 + 7)
    """
    return (n**2)%(10**9 + 7)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = summingSeries(n)

        fptr.write(str(result) + '\n')

    fptr.close()
