#!/bin/python3

import math
import os
import random
import re
import sys

#
#
#

def pickingNumbers(a):
    # Write your code here
    ans=[]  #Declared a List "ans" for storing the results in the program
    count=0 #Declared count variable as 0.
    for i in a:    # Code for counting the Length of longest subarray where the absolute difference between any two elements is 0 or 1 (Basically means one more), and then storing it into count.
        for j in a:
            if(j==i or j==i+1):
                count=count+1
        ans.append(count)
        count=0    # Initializing count as 0 again for the next loop
    for i in a:    # Code for counting the Length of longest subarray where the absolute difference between any two elements is 0 or 1 (Basically means one less), and then storing it into count.
        for j in a: 
            if(j==i or j==i-1):
                count=count+1
        ans.append(count) 
        count=0     # Initializing count as 0 again for the next loop
    return(max(ans))# Code for returning the Length of longest subarray from the list "ans" where the absolute difference between any two elements is less than or equals to 1.                

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
