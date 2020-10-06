#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the permutationEquation function below.
def permutationEquation(p):
    # list to store all the values of y
    results = []
    # loop over all values in: 1 <= x <= n (were n is the lenght of p)
    for x in range(1, len(p) + 1):
        # get the index of the index of x.
        # to take the example from the problem: p = [5, 2, 1, 3, 4], x=1
        # p.index(1) returns 2, we add one to get 3.
        # p.index(3) returns 4, we add one to get 5.
        # and we just do this for all values of x
        results.append(p.index(p.index(x) + 1) + 1)

    # return all the found y
    return results


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = list(map(int, input().rstrip().split()))

    result = permutationEquation(p)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()

