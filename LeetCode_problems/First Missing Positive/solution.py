# Observations:
# 1. The first missing positive number cannot be negative. So discard nums[i]<0
# 2. The numbers greater than the array length cannot be the missing number

# Approach:
# 1. We can use the array index for storing and storing the values to its respective index of array i.e. nums[nums[i]]=nums[i]
# 2. Last pass is done to make sure which element is not in its correct position

# Complexity: O(n) time and O(1) space


def firstMissingPositive(self, nums: List[int]) -> int:
        n=len(nums)

        for i in range(n):
            if 0<=nums[i]<=n:    #check for the numbers which only lie in the array range
                temp=nums[i]
                while nums[temp-1]!=temp:      #store the no. in temp and keep checking for correct index
                    nxt=nums[temp-1]
                    nums[temp-1]=temp
                    temp=nxt

                    if temp<=0 or temp>n: break   #break out once we find a no. which doesn't fit in the range

        for i in range(n):
            if i+1!=nums[i]:    #check for the first missing number
                return i+1
		return n+1