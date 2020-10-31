# We follow a greedy strategy to divide the number as much as we can.
# If there it is a multiple of 3, we introduce a factor of 2 so we can remove it completely in 2 counts.
# If there it is a multiple of 5, we introduce a factor of 4 so we can remove it completely in 3 counts.
for i in range(int(input())):
	num = int(input())
	count = 0
	while(num%2 == 0):
		num = num//2
		count+=1
	while(num%3 == 0):
		num = num//3
		count+=2
	while(num%5 == 0):
		num = num//5
		count+=3
	if(num!=1):
		print(-1)
	else:
		print(count)