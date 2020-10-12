# -*- coding: utf-8 -*-
"""
Created on Mon Oct 12 12:45:34 2020

@author: Incognito
"""

def count_substring(string, sub_string):
    end=len(sub_string)
    c=0
    for i in range(len(string)):
        #if starting character of substring is found in i-th position of string
        if(string[i]==sub_string[0]):
            """if all the characters from i-th position to i+length of substring
            are same as thecharacters in the substring"""
            if(string[i:i+end]==sub_string):
                c=c+1 #increment counter by 1
    return c

if __name__ == '__main__':
    #strip() is used to remove leading and trailing blank spaces
    string = input().strip() 
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print (count)