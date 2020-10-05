#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the dayOfProgrammer function below.
def dayOfProgrammer(year):
    a=[31,28,31,30,31,30,31,31,30,31,30,31]
    b=[31,29,31,30,31,30,31,31,30,31,30,31]
    c=[31,15,31,30,31,30,31,31,30,31,30,31]
    if(year<=1917):
        temp=0
        i=0
        j=0
        if(year%4==0):
            while(temp<256):
                temp=temp+b[i]
                i=i+1
                j=j+1
            temp=256-temp+b[i-1]            
            if(len(str(j))<2 and len(str(temp))<2):
                return("0{}.0{}.{}".format(temp,j,year))
            elif(len(str(j))<2):
                return("{}.0{}.{}".format(temp,j,year))
            elif(len(str(temp))<2):
                return("0{}.{}.{}".format(temp,j,year))
            else:
                return("{}.{}.{}".format(temp,j,year))
        else:
            while(temp<256):
                temp=temp+a[i]
                i=i+1
                j=j+1
            temp=256-temp+a[i-1]            
            if(len(str(j))<2 and len(str(temp))<2):
                return("0{}.0{}.{}".format(temp,j,year))
            elif(len(str(j))<2):
                return("{}.0{}.{}".format(temp,j,year))
            elif(len(str(temp))<2):
                return("0{}.{}.{}".format(temp,j,year))
            else:
                return("{}.{}.{}".format(temp,j,year))
    if(year==1918):
        temp=0
        i=0
        j=0
        while(temp<256):
                temp=temp+c[i]
                i=i+1
                j=j+1
        temp=256-temp+c[i-1]            
        if(len(str(j))<2 and len(str(temp))<2):
            return("0{}.0{}.{}".format(temp,j,year))
        elif(len(str(j))<2):
            return("{}.0{}.{}".format(temp,j,year))
        elif(len(str(temp))<2):
            return("0{}.{}.{}".format(temp,j,year))
        else:
            return("{}.{}.{}".format(temp,j,year))
    if(year>1918):
        temp=0
        i=0
        j=0
        if(year%100==0):
            if(year%400==0):
                while(temp<256):
                    temp=temp+b[i]
                    i=i+1
                    j=j+1
                temp=256-temp+b[i-1]            
                if(len(str(j))<2 and len(str(temp))<2):
                    return("0{}.0{}.{}".format(temp,j,year))
                elif(len(str(j))<2):
                    return("{}.0{}.{}".format(temp,j,year))
                elif(len(str(temp))<2):
                    return("0{}.{}.{}".format(temp,j,year))
                else:
                    return("{}.{}.{}".format(temp,j,year))
            else:
                while(temp<256):
                    temp=temp+a[i]
                    i=i+1
                    j=j+1
                temp=256-temp+a[i-1]            
                if(len(str(j))<2 and len(str(temp))<2):
                    return("0{}.0{}.{}".format(temp,j,year))
                elif(len(str(j))<2):
                    return("{}.0{}.{}".format(temp,j,year))
                elif(len(str(temp))<2):
                    return("0{}.{}.{}".format(temp,j,year))
                else:
                    return("{}.{}.{}".format(temp,j,year))
        else:
            if(year%4==0):
                while(temp<256):
                    temp=temp+b[i]
                    i=i+1
                    j=j+1
                temp=256-temp+b[i-1]            
                if(len(str(j))<2 and len(str(temp))<2):
                    return("0{}.0{}.{}".format(temp,j,year))
                elif(len(str(j))<2):
                    return("{}.0{}.{}".format(temp,j,year))
                elif(len(str(temp))<2):
                    return("0{}.{}.{}".format(temp,j,year))
                else:
                    return("{}.{}.{}".format(temp,j,year))
            else:
                while(temp<256):
                    temp=temp+a[i]
                    i=i+1
                    j=j+1
                temp=256-temp+a[i-1]            
                if(len(str(j))<2 and len(str(temp))<2):
                    return("0{}.0{}.{}".format(temp,j,year))
                elif(len(str(j))<2):
                    return("{}.0{}.{}".format(temp,j,year))
                elif(len(str(temp))<2):
                    return("0{}.{}.{}".format(temp,j,year))
                else:
                    return("{}.{}.{}".format(temp,j,year))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())

    result = dayOfProgrammer(year)

    fptr.write(result + '\n')

    fptr.close()
