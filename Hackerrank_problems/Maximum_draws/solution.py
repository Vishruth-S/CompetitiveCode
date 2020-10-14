#!/bin/python3

import os
import sys

def maximumDraws(n):
    # in short all the possibilities for drawing can 
    # be done by just adding the number of colours with 1 
    return n+1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())
    for t_itr in range(t):
        n = int(input())
        result = maximumDraws(n)
        fptr.write(str(result) + '\n')
    fptr.close()
