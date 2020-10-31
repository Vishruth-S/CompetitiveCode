'''
so for any n = x + 2x + 4x + ... + 2^(k-1)*x
we can write n = x*(1 + 2 + 4 + ... 2^(k-1))
this can be again written as n = x*(2^k - 1)
thus all we need to do is check if the given such number has any such factor that can be written as 2^k -1
and divide n by it to get x.
'''


for i in range(int(raw_input())):
	n = int(raw_input())
	i =2
	while (True):
		if(n%(pow(2,i)-1) == 0): #if we have found a factor of the form 2^k -1 
			print n/(pow(2,i) - 1)
			break
		i += 1
		if(i > 80):  #if 2^i gets too large/ larger than the given constraints
			print -1
			break