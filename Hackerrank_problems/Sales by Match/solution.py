#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    ar2 = []
    ar1 =sorted(ar)
    pair = 0
    numb = 0
   
# The while loop is used so that the index in ar1[numb] does not go out of index limit.
# First I tried doing while numb <= len(ar1) which gave indexError.
# Hence I removed the = sign as the range is '1 less than ar1' .
    while numb < len(ar1):
    # Used this foor loop to slice ar1 in same item lists.
    # To use the same list again and again O cleared the list below using del().
        for i in ar1:
            if i == ar1[numb]:
                ar2.append(i)
        a = len(ar2)
        del(ar2[:])
    
        if a >= 2:
            if a % 2 == 0:
                pair += round(a/2)
            
            else:
                pair += round((a-1)/2)
        
        numb += a
    return pair

    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
