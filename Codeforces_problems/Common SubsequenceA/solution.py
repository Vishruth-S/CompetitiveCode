'''
If there exists a common subsequence of length k then it's garunteed the 
smallest length of the subsequence that exists is 1 and that 1 length subsequence
can be any of the element of the subsequence
thus we check if there are any common elements between the 2 given arrays using a dictionary.
'''

for i in range(int(raw_input())):
	n,m = map(int,raw_input().split())
	x = list(map(int,raw_input().split()))
	y = list(map(int,raw_input().split()))
	d = {}
	for i in x:
		d[i] = 1
	done = False
	for i in y:
		if(d.get(i, -1) != -1):
			print "YES"
			print 1, i
			done = True
			break
	if(not done):
		print "NO"