# To ensure that the GCD remains greater than 1, we add odd numbers and even numbers together to b
# This ensures that the GCD always remains >= 2.
for tt in range(int(input())):
	n = int(input())
	l = list(map(int, input().split()))
	odd = []
	even = []
	for i in range(len(l)):
		if(l[i]%2==0):
			even.append(i+1)
		else:
			odd.append(i+1)
	ptrOdd = 0
	ptrEven = 0
	for i in range(n-1):
		if(ptrOdd<len(odd)-1):
			print(odd[ptrOdd], odd[ptrOdd+1])
			ptrOdd += 2
		else:
			print(even[ptrEven], even[ptrEven+1])
			ptrEven += 2