class Solution:
    def isMonotonic(self, A: List[int]) -> bool:
        if A==sorted(A):
            return True
        if A==sorted(A,reverse=True):
            return True
        return False