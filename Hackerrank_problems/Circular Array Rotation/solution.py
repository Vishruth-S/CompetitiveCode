#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the circularArrayRotation function below.
def circularArrayRotation(a, k, queries):
    ans=[]  #created a list "ans"
    l=len(a)  #Identified the length of "a", to find out No. of elements into it. 
    k=k%l      
    temp=list(a)  #Copied the list into a temorary variable "temp"
    for i in range(0,l): #Loop for Rotating the given Circular Array
        p=i+k
        if(p<=l-1):
            a[p]=temp[i]
        else:
            a[p-l]=temp[i]    
    for j in queries:  #Lastly the loop for storing (appending) answers into the above defined list "ans"
        ans.append(a[j])
    return(ans)        #Returning the list "ans" from where the function was called

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
