n = int(input())  # The number of squares in the chocolate bar
# An array of integers, the numbers on each of the squares of chocolate
arry = list(map(int, input().split()))
# Space-separated integers, d and m, Ron's birth day and his birth month.
lists = list(map(int, input().split()))
# Day
d = lists[0]
# Month
m = lists[1]
count = 0
# To check for every peice of chocolate
for i in range(0, n):
    length = 0
    sum_ = 0
    '''
        this for loop go through the complete list and add current elemet to next m element and check for conditions
		for example : arr = [2,2,1,3,2], d = 4 and m = 2
		m = 2 so we can only add 2 consicutive elements from arr and
		d = 4 so that their sum must be 4 to satisfy the condition
		=> 2 + 2 = 4 , 1 + 1 = 2
		=> 1 + 3 = 4 , 1 + 1 = 2 
        '''
    for j in range(i, n):
        length = length+1
        sum_ = sum_ + arry[j]
        if length == m and sum_ == d:
            count = count+1  # to store how many times condition was true
            break  # condition true then break the loop and move on next loop
        if sum_ > d or length > m:
            break  # condition false then break the loop and move on next loop
        j += 1
    i += 1
print(count)
