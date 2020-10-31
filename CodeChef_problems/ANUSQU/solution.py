#Question Link
#https://www.codechef.com/problems/ANUSQU
import math
n=int(input()) #input number of squares
sqrtn=math.floor(math.sqrt(n)) #finding the numbers of squares that can be accomodated
sqr=sqrtn*sqrtn
t=n-sqr
if t==0:
    print(int(4*sqrtn)) #square formations
elif t>0 and t<=n:
    print(int(4*sqrtn+2)) #rectanglular formation
elif t>n and t<=2*n:
    print(int(4*sqrtn+4)) #remaining cases
