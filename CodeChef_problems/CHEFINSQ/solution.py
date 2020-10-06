
#Question Link
#https://www.codechef.com/problems/CHEFINSQ
from math import *

#Function of printing nCr values
def printNcR(n, r):
    p = 1
    k = 1
    if (n - r < r): 
        r = n - r 
    if (r != 0):  
        while (r): 
            p *= n 
            k *= r 
            m = gcd(p, k) 
            p //= m 
            k //= m 
            n -= 1
            r -= 1  
    else: 
        p = 1
    return p
t=int(input())
for tc in range(t):
    n,k=map(int,input().split())
    a=list(map(int,input().split())) #input of list
    if(len(set(a))==n):
        print(1)
    else:
    	#storing the occurences of the values in a dictionaries
        dic={} 
        for i in a:
            if i not in dic.keys():
                dic[i]=1
            else:
                dic[i]+=1
        b=list(set(a))
        b=sorted(b) #sorting the array
        
        i=0
        sumfreq=0
        while(sumfreq<k):
            sumfreq+=dic[b[i]]
            i+=1
        if(sumfreq==k):
            print(1)
        else:
            #finding ncr of last element
            remainposition=k-(sumfreq-dic[b[i-1]])
            totalposlast=dic[b[i-1]]
            notselected=totalposlast-remainposition
            print(printNcR(totalposlast,notselected))
            
        
        

 
