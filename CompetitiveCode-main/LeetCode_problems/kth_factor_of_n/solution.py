# This the main class for the solution
class Solution:                      # This class takes two integer n and k as input
    def kthFactor(self, n: int, k: int) -> int:  # Here n is the number and k is the kth factor.
        ls = []                             # Initialize the empty list
        i = 1
        while(i<=n):                   # In this while loop we append all the factors of the number n
            if n%i == 0:
                ls.append(i)            # Appending the number to the list.
            i += 1
        try:                                # Returns the Kth factor if exist
            return ls[k-1]
        except:                             # else returns -1
            return -1