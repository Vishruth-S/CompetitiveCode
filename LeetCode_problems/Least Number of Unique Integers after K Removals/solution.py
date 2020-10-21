class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], q: int) -> int:
        #count number of times a unique number occured using collections library
        nums = collections.Counter(arr)
        li = []
        # we store frequency and the number togetherin a list ex:[[2,8]] 8 repeated 2 times
        for i in nums:
            li.append([nums[i], i])

        # we sort the list we created which is li
        # as we need to know the least number of unique integers we remove the least frequency numbers until q==0.
        val = (sorted(li))

        # ans in is the answer variable which is length of the array initially
        i = 0
        ans = len(val)
        # we run a loop until the q is equal to 0.
        while (q):
            #As long as the frequency is not 0 for a particular number we decrement both frequency and q value by 1
            if val[i][0] > 0:
                val[i][0] =  val[i][0] - 1
                q -= 1
            # once frequency of a value becomes 0 we move i by 1 to move to the next number and decrement ans by 1 as we can remove the number.
            if val[i][0]==0:
                     i+=1
                     ans-=1
        return ans
