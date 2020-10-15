#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    # since there's no def function you need to make a loop by yourself to keep asking input
    # for each testcase
    t = int(input())
    for i in range(t):
        nk = input().split()
        n = int(nk[0])
        k = int(nk[1])
        
        # it can be seen from the pattern in the example case
        # you just need to check whether it is less than n-k-1 or not
        # and print it two times k plus one if it is less 
        # or print two times n-k-1
        if (k < n-k-1 ):
            print ((k*2)+1)
        else :
            print(2*(n-k-1))
