#!/bin/python3

import os
import sys

#check() return maximum price of the USB drive which is less than or equal to our budget
#This uses the binary search approach to find the required  maximum value
def check(arr,start,end,n1,max):
    if end==start+1 or end==start:
        if arr[end]>max and arr[end]<=n1:
            max=arr[end]
            return max
        if arr[start]>max and arr[start]<=n1:
            max=arr[start]
        return max
    mid=(start+end)//2
    num=arr[mid]
    if num<=n1:
        if max<num:
            max=num
        return check(arr,mid,end,n1,max)
    return check(arr,start,mid,n1,max)


#getMoneySpent() will return the amount required to buy the most expensive keyboard and USB drive. If not not possible returns -1.
def getMoneySpent(keyboards, drives, b):
    moneyspent=-1           #maximum amount of money spent
    drives.sort()
    for num in keyboards:
        price=check(drives,0,m-1,b-num,-1)      #price=price of most expensive USB drive that can be bought after purchasing the keyboard of price num
        if price==-1:
            continue
        exp=price+num       #exp=expense after buying both the items
        if exp>moneyspent:
            moneyspent=exp

    return moneyspent


#input part fot the given problem
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    bnm = input().split()

    b = int(bnm[0])        #the budget

    n = int(bnm[1])         #number of keyboard models

    m = int(bnm[2])         #number of USb drive model

    keyboards = list(map(int, input().rstrip().split()))  #prices for the keyboard in the shop

    drives = list(map(int, input().rstrip().split()))      #prices for the usb drive in the shop

    #
    # The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    #

    moneySpent = getMoneySpent(keyboards, drives, b)

    fptr.write(str(moneySpent) + '\n')

    fptr.close()


#Time Complexity:-O(nlogn)
