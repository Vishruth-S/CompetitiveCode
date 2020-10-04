#!/bin/python3

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
