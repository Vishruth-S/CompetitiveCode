#Question Link
#https://www.codechef.com/problems/CHEFK1

t=int(input())
import math
for tc in range(t):
    n,m=map(int,input().split())
    maxp=(n*(n+1))//2
    maxm=(n*(n-1))//2

    if n==1 and m==0: #corner cases
        print(0)
    elif n==1 and m==1: #corner cases
        print(1)
    elif n==1 and (m>1): #corner cases #impossible case
        print(-1)
    elif(m==1 and n==2): #corner cases
        print(1)
    elif(m==2 or m==3) and n==2: #corner cases
        print(2)
    elif (m>=0 and m<n-1) or m>maxp: #corner cases #impossible case
            print(-1)
    elif(n%2==0):  #if n is even      
        if m<=n+1:
            print(2)
        elif m<=2*n:
            print(3)
        elif m<=maxp:
            print(3+math.ceil((m-n*2)/(n//2)))
    elif(n%2!=0): #if n is odd
        #continue from here
        if m<=n+1:
            print(2)
        elif m<=2*n:
            print(3)
        elif m<=maxp:
            print(3+math.ceil((m-n*2)/(n/2)))
            
            
        
    
