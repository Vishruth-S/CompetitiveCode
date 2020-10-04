class Solution:
       def isMatch(self, s: str, p: str) -> bool:
        matrix = [[False for x in range(len(p) + 1)] for x in range(len(s) + 1)]
        matrix[0][0] = True

        for i in range(1,len(matrix[0])):
            if p[i-1] == '*':
                matrix[0][i] = matrix[0][i-1]

        for i in range(1, len(matrix)):
        	for j in range(1, len(matrix[0])):
        		if s[i - 1] == p[j - 1] or p[j - 1] == '?':
        			matrix[i][j] = matrix[i-1][j-1]
        		elif p[j-1] == '*':
        			matrix[i][j] = matrix[i][j-1] or matrix[i-1][j]
        		else:
        			matrix[i][j] = False
        return matrix[len(s)][len(p)]
