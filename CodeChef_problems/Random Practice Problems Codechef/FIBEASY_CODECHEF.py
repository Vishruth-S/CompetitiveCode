#Question Link
#https://www.codechef.com/problems/FIBEASY
t=int(input())
import math
x=0
y=1
z=0
a=[]
a.append(x)
a.append(y)
for i in range(0,118):
    a.append((x+y)%10)
    z=(x+y)%10
    x=y%10
    y=z%10
def func(n):
    power=0
    while(n>0):
        n=n>>1
        power+=1
    return 2**(power-1)
for tc in range(t):
    n=int(input())
    
    print(a[(func(n)-1)%60])
    

