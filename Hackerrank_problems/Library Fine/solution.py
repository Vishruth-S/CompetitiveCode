#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the libraryFine function below.
def libraryFine(d1, m1, y1, d2, m2, y2):
    if y1<=y2:                                 # checking whether the returned year is less than equal to the due year
        if y1<y2:
            fine =0
        else:                                  # when both the years are equal
            if ((m1==m2) and (d1<=d2)) or (m1<m2): # check for due month and returned month is same but the returned date is less than the due date, or due month is more than the returned month
                fine=0
            else:                              # check for when the returned date is past the due date
                if (d1>d2) and (m1==m2):       # month is same but the returned date is more
                    fine = 15*(d1-d2)
                else:                          # returned month is more than the due month
                    fine = 500*(m1-m2)
    else:                                      # returned year is more than the due year
        fine=10000
    return fine





if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    d1M1Y1 = input().split()  # input of returned date

    d1 = int(d1M1Y1[0])

    m1 = int(d1M1Y1[1])

    y1 = int(d1M1Y1[2])

    d2M2Y2 = input().split()  # input of returned date

    d2 = int(d2M2Y2[0])

    m2 = int(d2M2Y2[1])

    y2 = int(d2M2Y2[2])

    result = libraryFine(d1, m1, y1, d2, m2, y2)   # calling the function

    fptr.write(str(result) + '\n')

    fptr.close()