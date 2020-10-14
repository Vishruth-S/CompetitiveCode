import math
import os
import random
import re
import sys

def catAndMouse(x, y, z):
    if(abs(z-x)==abs(z-y)):   # checking whether both the cats reach at the same time or not
        return "Mouse C"      # if yes, returns Mouse C
    elif(abs(z-x)>abs(z-y)):  # checking if the cat B reaches earlier or Cat A
        return "Cat B"
    else:
        return "Cat A"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())        # input the number of test cases

    for q_itr in range(q):
        xyz = input().split()

        x = int(xyz[0])

        y = int(xyz[1])

        z = int(xyz[2])

        result = catAndMouse(x, y, z)

        fptr.write(result + '\n')

    fptr.close()
