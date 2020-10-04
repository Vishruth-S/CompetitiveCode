'''
Some basic explanation for the approach:

Assume that there’s just one table initially which has all the guests sitting on it.
Now, this arrangement might not have the minimum inefficiency. 
So, we consider all the possible arrangements and choose the one with the minimum inefficiency.

Basically, we minimize the inefficiency by splitting the guests into two parts and assigning one table to the first part.
Then, for the second part, we again try to minimize the inefficiency by following the same steps until we have no guests remaining.
'''
# cook your dish here
import sys
from collections import defaultdict
def my_fun():
    return 0
try:
    t=int(input())
    while t:
        t-=1
        
        # n -> no. of guests.
        # cost -> cost of each table.
        n,cost=map(int,input().split())
        d=defaultdict(my_fun)
        d1=defaultdict(my_fun)
        
        # f -> Guests coming from particular family
        f=list(map(int,input().split()))
        c=[]
        rows, cols = (n, n) 
        
        # arr -> represents a n*n matrix.
        arr = [[0 for i in range(cols)] for j in range(rows)]
        
        # final -> represents a n*100 matrix, 100 because we can have maximum 100 different families.
        final = [[0 for i in range(n+1)] for j in range(101)]
        
        tot=1
        
        # Counting the guests coming from each family.
        for i in range(n):
            d[f[i]]+=1
            if(c.count(f[i])==0):
                c.append(f[i])
            else:
                # f=1
                c=[]
                c.append(f[i])
                tot+=1  
        dcount = len(d)
        
        # Creating the cost matrix according to the families.
        for i in range(0,n):
            d1.clear()
            for j in range(i,n):
                if(j==0):
                    arr[i][j]=0
                else:
                    arr[i][j]=arr[i][j-1]
                if(d1[f[j]]):
                    if(d1[f[j]] == 1):
                        arr[i][j]+=1
                    arr[i][j]+=1
                d1[f[j]]+=1
        
        # Calculating the total cost and returning the optimal cost if cost == 1. 
        fin=0
        t1=cost
        for k1,v in d.items():
            if(v>1):
                t1+=v
        if(tot*cost>t1):
            fin=t1
            res=t1
        else:
            fin=tot*cost
            res=tot*cost
        if(cost == 1):
            print(fin)
            continue
        cout=0   
        prev=fin
        
        # Using DP for solving the problem if cost > 1 by finding the optimal solution of the problem.
        for i in range(1,n+1):
            final[1][i]=arr[0][i-1]
        for i in range(2,dcount+1):
            if (i*cost > prev):
                break
            for j in range(2,n+1):
                b=sys.maxsize
                for k in range(1,j):
                    b=min(b,final[i-1][k]+arr[k][j-1]) 
                final[i][j]=b
            if(i*cost+final[i][n] < prev):
                prev=i*cost+final[i][n]

        # Returning the optimal cost.
        print(prev)

except Exception:
    pass
