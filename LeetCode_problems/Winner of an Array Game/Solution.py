# The main idea of the problem is keeping a track of the next element by comparing with the current element

# Observations:
# 1. After the max(arr) iterations, the o/p will always be max(arr) irrespective of k
# 2. if number of elements in arr < K the answer is max(arr)
# 3. if arr[0] = max(arr) then answer is max(arr)
# 4. if k>mx or n<k or arr[0]==mx: return mx

# Code Complexity: Time: O(n) Space: O(1)

cur = arr[0]
no_of_win = 0

for i in range(1, len(arr)):
'''if next element is greater, change current to next element'''
	if arr[i] > cur:    
		cur = arr[i]
		no_of_win = 0
	no_of_win += 1    '''if smaller simply increment the number of wins'''
	if (no_of_win == k): break
return cur