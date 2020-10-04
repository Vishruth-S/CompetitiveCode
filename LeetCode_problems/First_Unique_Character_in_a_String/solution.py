from collections import Counter
class Solution:
    def firstUniqChar(self, s: str) -> int:
        ct=Counter(s)
        for i in range(len(s)):
            if ct[s[i]]==1:
                return i
        return -1
        