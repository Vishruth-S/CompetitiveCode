class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums = list()
        for i in range(n):
            nums.append(2 * i + start)
            
        xor = nums[0]
        for num in nums[1:]:
            xor ^= num
        return xor
