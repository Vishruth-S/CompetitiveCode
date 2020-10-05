from collections import Counter
class Solution:
    def firstUniqChar(self, s: str) -> int:
        ct=Counter(s)
        for i in range(len(s)):
            if ct[s[i]]==1:
                return i
        return -1
# Counter makes a frequency map of letters in string
# we iterate over the letters of the string and check if it has only 1 count, then return the first one
# else if no count is 1, we return -1 because no letter is unique
        
