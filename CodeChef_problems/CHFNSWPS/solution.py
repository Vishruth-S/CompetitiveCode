'''
-----------LOGIC---------------
We can be sure that if any number occurs odd times in array A and even times in array B
or vice versa then the answer is -1 as their cumulative frequency is odd, otherwise, the answer always exists.

Now, we have to minimize the total cost to make the sequences identical. Let’s say there exist indices i, j such that they need to be swapped,
and there exists a minimum element kk among all elements of A and B, then we can swap A_i and B_j in two ways: Either swap A_i and B_j directly,
or swap A_i and B_j using two swaps with the help of k (i.e., swap A_i with k, and then swap k with B_j or vice-versa).

In case of indirect swaps(two swaps through kk), we can either choose A_i to be the minimum element of A and B_j to be the maximum element of B or 
A_i to be the maximum element of A and B_j to be the minimum element of B, such that A_i and B_j both need to be swapped.
This is the optimal way to minimize the total cost incurred in case of direct swaps.
'''





# cook your dish here
from collections import defaultdict
def def_val():
    return 0
try:
    t=int(input())
    while t:
        t-=1
        flag=0
        M=1000000000
        n=int(input())
        
        # a-> represents A array
        a=list(map(int,input().split()))
        
        # b -> represents B array
        b=list(map(int,input().split()))
        
        
        if(n==1):
            if a[0]!=b[0]:
                print(-1)
                continue
                
        a1=a.copy()
        b1=b.copy()
        d=defaultdict(def_val)
        comm=defaultdict(def_val)
        comm1=defaultdict(def_val)
        
        # adding values in dict
        for i in range(n):
            M=min(a[i],M)
            M=min(b[i],M)
            d[a[i]]+=1
            d[b[i]]+=1
        for k,v in d.items():
            comm[k]=v//2
            if(v%2!=0):
                flag=1
                break 
        if flag==1:
            print(-1)
            continue
        comm1=comm.copy()

        # Filling the 2 common dictionaries based on arrays.
        for i in range(n):
            if(comm[a[i]]>0):
                comm[a[i]]-=1
        for i in range(n):
            if(comm1[b[i]]>0):
                comm1[b[i]]-=1

        valA=[]
        valB=[]
        for k,v in comm.items():
            while(v>0):
                v-=1
                valA.append(k)
        for k,v in comm1.items():
            while(v>0):
                v-=1
                valB.append(k)
        if(len(valA)==0):
            print(0)
            continue
        
        valA.sort()
        valB.sort(reverse=True)
        tot1=0
        
        # Finding the optimal cost.
        for i in range(len(valA)):
            tot1+=min(2*M,min(valA[i],valB[i]))
            
        # printing the optimal cost
        print(tot1)        
       
except Exception:
    pass
