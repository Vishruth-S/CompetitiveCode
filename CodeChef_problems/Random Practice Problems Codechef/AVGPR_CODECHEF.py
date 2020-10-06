#Question Link
#https://www.codechef.com/problems/AVGPR
t=input()
t=int(t)
for a0 in range(1,t+1):
    n=input()
    n=int(n)
    a=list(map(int,input().split()))
    b={}
    even=[]
    odd=[]
    for i in range(-1001,1002):
        b[i]=0
    for i in a:
        b[i]+=1
    for i in set(a):
        if (i%2==0):
            even.append(i)
        elif (i%2!=0):
            odd.append(i)
    ct=0
    for i in range(-1001,1002):
        ct+=(b[i]*(b[i]-1))//2

    for i in range(0,len(even)-1):
        for j in range(i+1,len(even)):
            if b[(even[i]+even[j])//2]>0:
                ct+=(1*(b[even[i]])*b[even[j]])


    for i in range(0,len(odd)-1):
        for j in range(i+1,len(odd)):
            if b[(odd[i]+odd[j])//2]>0:
                ct+=(1*(b[odd[i]])*b[odd[j]])

    print(ct)
