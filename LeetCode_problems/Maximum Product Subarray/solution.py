# We initialize three variables - max_product, current_max and current_min 
# to the value in the 0th index. 
# One important thing to note here would be that the sub-array should be 
# continuous.

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        
        if len(nums) == 1:
            return nums[0]
        
        max_product = nums[0]
        current_max = nums[0]
        current_min = nums[0]
        
        # For every number in list from 1st index
        for num in nums[1:]:
            
            # We update the current_max and current_min value as below
            # This checks all combinations of products of sub-array.

            # We store the value of current_max in a temporary variable
            # as current_max would have to be updated
            temp_max = current_max
            
            current_max = max(num, current_max*num, current_min*num)
            current_min = min(num, temp_max*num, current_min*num)
            
            # If the value of current_max is more that max_product
            # we update the value of max_product
            if current_max > max_product:
                max_product = current_max
                
        # At the end we return the value max_product
        return max_product