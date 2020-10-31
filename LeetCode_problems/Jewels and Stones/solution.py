class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        # maintain count of jewels
        jewels = 0
        
        # check how many jewels are in the string of stones
        for j in J:
            jewels += S.count(j)
            
        return jewels
