#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the circularArrayRotation function below.
def circularArrayRotation(a, k, queries):
    ans=[]
    l=len(a)
    k=k%l
    temp=list(a)
    for i in range(0,l):
        p=i+k
        if(p<=l-1):
            a[p]=temp[i]
        else:
            a[p-l]=temp[i]    
    for j in queries:
        ans.append(a[j])
    return(ans)           

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nkq = input().split()

    n = int(nkq[0])

    k = int(nkq[1])

    q = int(nkq[2])

    a = list(map(int, input().rstrip().split()))

    queries = []

    for _ in range(q):
        queries_item = int(input())
        queries.append(queries_item)

    result = circularArrayRotation(a, k, queries)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
