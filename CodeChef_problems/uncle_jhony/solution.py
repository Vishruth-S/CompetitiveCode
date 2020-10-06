# cook your dish here

t = int(input())                            # Taking the Number of Test Cases

for i in range(t):                          # Looping over test cases
    n = int(input())                        # Taking the length of songs input
    p = [int(i) for i in input().split()]   # Taking the list of song length as input
    k = int(input())        # Taking the position of the uncle jhony song(taking indexing from 1)
    ele = p[k-1]            # Storing that element in a variable (position was taken -1 as indexing of our list is from 0 and user entered according to indexing starting from 1)
    for i in range(n):      # Here for sorting the list we use bubble sort algorithm
        j = 0               # bubble sorting program - line 10 to 14
        for j in range(0, n-i-1):
            if p[j] > p[j+1]:
                p[j], p[j+1] = p[j+1], p[j]
    ls = (p.index(ele))               # Now geeting the position of uncle jhony song in sorted list.
    print(ls+1)                       # Printing the position + 1 as the indexing started from 0.

