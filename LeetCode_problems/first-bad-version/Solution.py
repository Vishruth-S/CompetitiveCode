# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 2020

@author: Shrey1608
"""
# Approach : 1)It is not difficult to see that this could be solved using a classic algorithm - Binary search.(time complexity : 0(logn) || space complexity: O(1))  
             

# Solution:(Approach 1)
class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        left,right=0,n
        while left < right:
            mid = left + (right - left) // 2
            if isBadVersion(mid):
                right = mid
            else:
                left = mid + 1
        return left