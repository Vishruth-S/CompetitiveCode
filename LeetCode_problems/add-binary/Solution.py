# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 2020

@author: Shrey1608
"""
''' Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.'''

# Approach : 1) basic binary conversion into int then compute the sum and then convert again into binary (Time complexity= O(N+M) || space complexity = O(1)
#            2) Bit manipulation (Time complexity= O(N+M) || space complexity = O(max(n,m))


# Solution : conversion method
class Solution:
    def addBinary(self, a, b) -> str:
        return '{0:b}'.format(int(a, 2) + int(b, 2))


#solution : Bit manipulation
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        x,y=int(a,2),int(b,2)
        while y!=0:
            answer=x^y
            carry=(x&y) << 1
            x,y=answer,carry
        return bin(x)[2:]