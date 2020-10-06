# -*- coding: utf-8 -*-
"""
Created on Sun Oct  4 15:35:28 2020

@author: Tanmoyee
"""
''' Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.'''



class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        if not candidates:
            return []
        result=[]
        candidates.sort()
        def helper(target,index,sub_list):
            if target==0:
                result.append(sub_list)
            if target<0 or index>len(candidates):
                return
            for i in range(index,len(candidates)):
                if target<candidates[i]:
                    break
                helper(target-candidates[i],i,sub_list+[candidates[i]])
        helper(target,0,[])
        return result