class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        dictNums = {}
        for i in arr:
            if i in dictNums.keys():
                dictNums[i] += 1
            else:
                dictNums[i] = 1
        freqList = list(dictNums.values())
        freqList.sort(reverse = True)
        
        res = 0
        count = 0
        n = len(arr)
        half = n - (n // 2)
        
        for i in freqList:
            count += i
            res += 1
            if count >= half:
                return res