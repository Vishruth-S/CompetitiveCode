#Question Link
#https://www.codechef.com/problems/GDSUB
mod=1000000007
n,k=map(int,input().split())
a=list(map(int,input().split()))
freq=[0]*10000
arr=[0]*10000
suma=[0]*10000
c=0
for i in a:
    freq[i]+=1
for i in range(8001):
    if(freq[i]>0):
        arr[c]=freq[i]
        c+=1
for i in range(c-1,-1,-1):
    suma[i]=arr[i]+suma[i+1];
res=1+suma[0]
flag=1
for i in range(2,k+1):
    if i>c:
        break
    if(flag==1):
        temp=0
        for j in range(0,c):
            suma[j]=arr[j]*suma[j+1]%mod
            temp+=suma[j]
        res+=temp
        flag=2
    else:
        temp=0
        p=0
        tem=0
        for j in range(c-1,-1,-1):
            tem=(arr[j]*p)%mod
            p+=suma[j]
            suma[j]=tem
            temp+=tem
        res+=temp

print(res%mod)
