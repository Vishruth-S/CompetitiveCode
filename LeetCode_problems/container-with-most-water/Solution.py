# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 2020

@author: Shrey1608
# Approach : 1) Brute force (Time complexity= O(n^2) || space complexity = O(1))
#            2) Two pointer method (Time Time complexity= O(n) || space complexity = O(1))
             

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