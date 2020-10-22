#!/bin/python3

import os
import sys

#
#You will get the money spent between the keyboard and the usb and sum it if it is less than the budget it will return the price spent
def getMoneySpent(keyboards, drives, b):
    spend = -1
 #Check each cost of each keyboard with that of each usb will sum them until some result is less than the budget we have
    for key in keyboards:
        for d in drives:
            if key + d <=b:
                spend = max(spend, key + d)
 
    return spend

#Get the input from the user the first line will get the max money to spend, the model of keyboard and the model of usb
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    bnm = input().split()

    b = int(bnm[0])

    n = int(bnm[1])

    m = int(bnm[2])

    keyboards = list(map(int, input().rstrip().split()))

    drives = list(map(int, input().rstrip().split()))

    #
    # The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    #
    #It will start the function to obtain the spent price
    moneySpent = getMoneySpent(keyboards, drives, b)

    fptr.write(str(moneySpent) + '\n')

    fptr.close()
