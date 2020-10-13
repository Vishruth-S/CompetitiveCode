#!/bin/python3

import os
import sys
import math

#
# Complete the findPoint function below.
#
def findPoint(px, py, qx, qy):
    # calculate the distance between x axis and y axis
    dis_x = qx-px
    dis_y = qy-py
    # return it by adding the last/outer point (qx and qy)
    # with the distances in each axes
    return (qx+dis_x , qy+dis_y)
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())

    for n_itr in range(n):
        pxPyQxQy = input().split()
        px = int(pxPyQxQy[0])
        py = int(pxPyQxQy[1])
        qx = int(pxPyQxQy[2])
        qy = int(pxPyQxQy[3])
        result = findPoint(px, py, qx, qy)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
