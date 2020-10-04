class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        #we make a set of the given list
        s=list(set(nums))
        #iterate over the set
        for i in range(len(s)):
 #we check if the count of the element is >n/2 by using the count function as soon as we get that required element which satisfies the condition we break out the loop and return the value to the main function.
            if nums.count(s[i])>len(nums)/2:
                break
        return s[i]