#!/bin/python3

#First we count the number of birds of types 1-5 by using the count function in python
#Then we form a list of the counts we got
#Then we find the index of the list with maximum count(the required as per the problem) then we add 1 to the index beacause when we are indexing in the list it starts from 0 
#means if answer is 3 it will return 2, hence we add 1 to balance that out.

import math
import os
import random
import re
import sys

# Complete the migratoryBirds function below.
def migratoryBirds(arr):
    a=arr.count(1)
    b=arr.count(2)
    c=arr.count(3)
    d=arr.count(4)
    e=arr.count(5)
    l=[a,b,c,d,e]
    return l.index(max(l))+1
     
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
