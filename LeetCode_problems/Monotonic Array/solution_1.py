class Solution:
    def isMonotonic(self, A: List[int]) -> bool:
        #an array is monotonic if it is either increasing or decreasing, so we check if the array is equal to 
        #its sorted version in either descending order or ascending order. If yes return True
        #else return False.
        if A==sorted(A):
            return True
        if A==sorted(A,reverse=True):
            return True
        return False