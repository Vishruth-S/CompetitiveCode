# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 2020

@author: Shrey1608
"""
''' Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.'''

# Approach : 1) List method-conversion to list and then adding (Time complexity= O(n) || space complexity = O(1))
#            2) Elementary math- carry method(Time complexity= O(len(string)) || space complexity = O(1))



#Solution 1: List method
class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        s=[]
        r=[]
        n=len(num1)
        m=len(num2)
        for i in range(n):
            s.append(num1[i])
        for i in range(m):
            r.append(num2[i])
        res = int("".join(s))
        res1 = int("".join(r))
        ans=res+res1
        return str(ans)

#solution 2: (elementary math(carry method))
class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        res = []

        carry = 0
        p1 = len(num1) - 1
        p2 = len(num2) - 1
        while p1 >= 0 or p2 >= 0:
            x1 = ord(num1[p1]) - ord('0') if p1 >= 0 else 0
            x2 = ord(num2[p2]) - ord('0') if p2 >= 0 else 0
            value = (x1 + x2 + carry) % 10
            carry = (x1 + x2 + carry) // 10
            res.append(value)
            p1 -= 1
            p2 -= 1
        
        if carry:
            res.append(carry)
        
        return ''.join(str(x) for x in res[::-1])
