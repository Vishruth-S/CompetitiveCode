# Map Approach [O(n)] : 
# Idea is to create a hashmap to store freq of the elements, and lookup those elements while traversing the array to check if their sum is equal to the given sum or not
# GeeksforGeeks Explanation: https://youtu.be/bvKMZXc0jQU

def getPairsCount(arr, n, sum): 
	
	m = [0] * 1000
	
	# Store counts of all elements in map m 
	for i in range(0, n): 
		m[arr[i]]           # Stores the frequency of the number in the array
		m[arr[i]] += 1

	twice_count = 0

	# Iterate through each element and increment the count (Every pair is counted twice) 
	for i in range(0, n): 
	
		twice_count += m[sum - arr[i]] 

		# if (arr[i], arr[i]) pair satisfies the condition, then we need to ensure that the count is decreased by one such that the (arr[i], arr[i]) pair is not considered 
		if (sum - arr[i] == arr[i]): 
			twice_count -= 1
	
	# return the half of twice_count 
	return int(twice_count / 2) 

n = int(input())
arr = list(map(int,input().split()))
sum = int(input())

print(getPairsCount(arr, n, sum))