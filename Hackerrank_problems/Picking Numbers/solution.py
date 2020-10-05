#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    # Write your code here
    ans=[]
    count=0
    for i in a:
        for j in a:
            if(j==i or j==i+1):
                count=count+1
        ans.append(count)
        count=0
    for i in a:
        for j in a:
            if(j==i or j==i-1):
                count=count+1
        ans.append(count) 
        count=0 
    return(max(ans))                      

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
