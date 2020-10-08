# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 2020

@author: Shrey1608
"""

# Approach : 1) Brute force : In this case, we will simply consider the area for every possible pair of the lines and find out the maximum area out of those.  (Time complexity= O(n^2) || space complexity = O(1))
#            2) Two pointer method:he intuition behind this approach is that the area formed between the lines will always be limited by the height of the shorter line. Further, the farther the lines, the more will be the area obtained.
#               We take two pointers, one at the beginning and one at the end of the array constituting the length of the lines. Futher, we maintain a variable maxarea\text{maxarea}maxarea to store the maximum area obtained till now. At every step, we find out the area formed between them, update maxarea\text{maxarea}maxarea and move the pointer pointing to the shorter line towards the other end by one step.(Time Time complexity= O(n) || space complexity = O(1))
#              

# Solution:(Two pointer method)

class Solution:
    def maxArea(self, h: List[int]) -> int:
        lst=[]
        n=len(h)
        a,b=0,n-1
        while a<b:
            if h[a]<=h[b]:
                s=h[a]
                r=b-a
                lst.append(s*r)
                a+=1
            elif h[a]>h[b]:
                s=h[b]
                r=b-a
                lst.append(s*r)
                b-=1
        return max(lst)
