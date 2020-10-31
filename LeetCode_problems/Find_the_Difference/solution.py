from collections import Counter
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        cts=Counter(s)
        ctt=Counter(t)
        for i in ctt.keys():
            if ctt[i]>cts[i]:
                return i
        return ""
# make a frequency map of both the strings
# iterate over keys of string t
# check if value of that key is bigger than the value of 
#key in freq map of s, then that is the extra letter
# return empty string if both string equal