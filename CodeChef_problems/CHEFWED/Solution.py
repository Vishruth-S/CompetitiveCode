# cook your dish here
import sys
from collections import defaultdict
def my_fun():
    return 0
try:
    t=int(input())
    while t:
        t-=1
        n,cost=map(int,input().split())
        d=defaultdict(my_fun)
        d1=defaultdict(my_fun)
        f=list(map(int,input().split()))
        c=[]
        rows, cols = (n, n) 
        arr = [[0 for i in range(cols)] for j in range(rows)]
        final = [[0 for i in range(n+1)] for j in range(101)]
        tot=1
        # print(t)
        for i in range(n):
            d[f[i]]+=1
            if(c.count(f[i])==0):
                c.append(f[i])
            else:
                # f=1
                c=[]
                c.append(f[i])
                tot+=1
        # print(d)    
        dcount = len(d)
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
            # print(d1)
        
        fin=0
        t1=cost
        for k1,v in d.items():
            if(v>1):
                t1+=v
        # print(t1)
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


        print(prev)

except Exception:
    pass
