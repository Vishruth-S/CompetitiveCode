# Brute Force Method [O(n^2)]
n = int(input())
arr = list(map(int,input().split()))
sum = int(input())
count = 0

for i in range(0, n):
    for j in range(i+1, n): 
        if arr[i]+arr[j]==sum: 
            count+=1
print(count)