class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        # build the initial array of numbers following the formula
        nums = list()
        for i in range(n):
            nums.append(2 * i + start)
            
        # compute the xor of all of the numbers
        xor = nums[0]
        for num in nums[1:]:
            xor ^= num
        return xor
