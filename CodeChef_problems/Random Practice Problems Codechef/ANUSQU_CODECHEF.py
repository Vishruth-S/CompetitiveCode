#Question Link
#https://www.codechef.com/problems/ANUSQU
import math
n=int(input())
sqrtn=math.floor(math.sqrt(n))
sqr=sqrtn*sqrtn
t=n-sqr
if t==0:
    print(int(4*sqrtn))
elif t>0 and t<=n:
    print(int(4*sqrtn+2))
elif t>n and t<=2*n:
    print(int(4*sqrtn+4))
