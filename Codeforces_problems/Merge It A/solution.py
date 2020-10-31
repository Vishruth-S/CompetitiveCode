# We can check the divisibility by 3 by taking the sum of digits.
# If remainder is 0, we consider it as it is. If remainder is 1 or 2 we can combine them greedily.
# We can then combine 3 numbers each with remainder 1 or 2.
def sum_of(n):
	s = 0
	num = n
	while(num>0):
		s+=num%10
		num = num//10
	return s

for i in range(int(input())):
	n = int(input())
	l = list(map(int, input().split()))
	x_0 = 0
	x_1 = 0
	x_2 = 0
	for i in range(n):
		temp = sum_of(l[i])
		if(temp%3 == 0):
			x_0 += 1
		elif((temp-1)%3 == 0):
			x_1 += 1
		else:
			x_2+=1
	temp = min(x_1, x_2)
	count = x_0 + temp
	x_1-=temp
	x_2-=temp
	count += x_1//3
	count += x_2//3
	print(count)