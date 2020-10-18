class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        # declare array to return
        output = list()

        # compute running sum for each index
        for i in range(len(nums)):
            output.append(sum(nums[:i+1]))

        return output
