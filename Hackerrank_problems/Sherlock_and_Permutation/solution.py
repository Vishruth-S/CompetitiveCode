#!/bin/python3
import os
import sys
import math
# Complete the solve function below.
def solve(n, m):
    """
    this is the alghorithm to calculate the permutation
    since it's said that it wants only the one starts with 1
    so we just need to calculate m-1+n permutatiton
    """
    mod = 10**9 + 7
    m = m-1
    tot_factorial = math.factorial(m+n)%mod
    n_factorial = math.factorial(n)
    mn_factorial = math.factorial(m)
    
    # use pow and mod in case the number is too big and returning false number
    den=n_factorial*mn_factorial
    den=pow(den,mod-2,mod)
    result = tot_factorial * den %mod
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        nm = input().split()
        n = int(nm[0])
        m = int(nm[1])
        result = solve(n, m)
        fptr.write(str(result) + '\n')

    fptr.close()
