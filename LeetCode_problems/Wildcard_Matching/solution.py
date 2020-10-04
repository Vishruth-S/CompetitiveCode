# Made use of dynamic programming to solve this problem.
# Defined a 2D matrix variable "matrix"  where matrix[i][j] implies that the first i characters in string s match with the first j characters of string p.
# Init: matrix[0][0] = True if both s and p are null
#	matrix[i][0] = False if pattern is null
#	matrix[0][j] = matrix[0][j-1] if the character p[j-1] is a "*" i.e., text string is null

class Solution:
       def isMatch(self, s: str, p: str) -> bool:
        matrix = [[False for x in range(len(p) + 1)] for x in range(len(s) + 1)]
        matrix[0][0] = True

        for i in range(1,len(matrix[0])):
            if p[i-1] == '*':
                matrix[0][i] = matrix[0][i-1]

        for i in range(1, len(matrix)):
        	for j in range(1, len(matrix[0])):
        		# If the characters match, the result is the same as result for lengths minus one. The characters match if:
        		# a) If pattern char is '?' then it matches with any char of text
        		# or b) If the current chars in both match
        		if s[i - 1] == p[j - 1] or p[j - 1] == '?':
        			matrix[i][j] = matrix[i-1][j-1]
        		
        		# If '*' is encountered, then we have two choices:
        		# a) We ignore the '*' and move to the next char in the pattern i.e., '*' indicates an empty sequence
        		# b) '*' matches with the ith char in the input string
        		elif p[j-1] == '*':
        			matrix[i][j] = matrix[i][j-1] or matrix[i-1][j]
        		else:
        			matrix[i][j] = False
        return matrix[len(s)][len(p)]
