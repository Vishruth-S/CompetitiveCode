#!/bin/python3

#Logic: Calculate the reverse of the number 
#Then calculate the absolute difference between original number and its reverse
#If the difference is divisible by 'k', increment the counter

def reverse(x):
    n = 0
    while(x!=0):
        n = x%10 + n*10
        x = x//10
    return n

def beautifulDays(i, j, k): 
    c = 0                         #c: counter
    for d in range(i,j+1):
        n = reverse(d)
        if abs(d-n)%k == 0:
            c+=1
    return c

if __name__ == '__main__':
    ijk = input().split()
    i = int(ijk[0])               #i: starting day number
    j = int(ijk[1])               #j: ending day number
    k = int(ijk[2])               #k: divisor
    result = beautifulDays(i, j, k)
    print(result)
