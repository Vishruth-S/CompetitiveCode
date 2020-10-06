#we first sort the array, then we traverse the array by a step of 2 hence we get the required sum. we need the minimum value of a pair
#so if the array is [2,1,3,4] it sorts to [1,2,3,4] then it takes the sum of 1 and 3 which is required.
class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums=sorted(nums)
        s=0
        for i in range(0,len(nums),2):
            s=s+nums[i]
        return s
