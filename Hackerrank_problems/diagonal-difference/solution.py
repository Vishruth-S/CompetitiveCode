#!/bin/python3

import math
import os
import random
import re
import sys

# The function accepts 2D_INTEGER_ARRAY arr as parameter and returns an integer as the diagonal difference.

def diagonalDifference(arr):
    #Initialising the sum of left diagonal elements to be 0
    left = 0
    #Initialising the sum of left diagonal elements to be 0
    right = 0
    for i in range(len(arr)):
        #Iterating theough the rows of the 2D Array
        left += arr[i][i]
        #Adding the elements of the left diagonals
        right += arr[i][len(arr)-i-1]
        #Adding the elements of the right diagonal
    #Returning the absolute difference between the sum of the left diagonal elements and the sum of the right diagonal elements
    return abs(left-right)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())
    #Accepting the number of rows of the 2D Array

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))
        #Accepting the rows of the 2D Array

    result = diagonalDifference(arr)
    #Passing the 2D array to the "diagonalDifference" function and storing the result

    fptr.write(str(result) + '\n')
    #Printing the result

    fptr.close()
