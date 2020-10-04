# cook your dish here
t=int(input())
for _ in range(t):
    carry=0
    n,k=input().split()
    a=list(map(int,input().split()))
    b=[]

    
    flag=1
    for j in range(len(a)):
        if(a[j]>int(k)):
            flag=0
    if(flag==0):
        print(-1)
    else:
        i=0
        #for i in range(len(a)):
        while(i<int(n)):
       
            carry=0
            while( i<int(n) and carry+a[i]<=int(k) ):
                carry+=a[i]
                i+=1
            b.append(carry)
          
  
        print(len(b))# cook your dish here
