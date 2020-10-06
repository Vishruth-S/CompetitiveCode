#Question Link
#https://www.codechef.com/problems/LAPD
mod=10**9+7
for tc in range(int(input())):
    A,B,C=map(int,input().split())
    
    ct=0
    for i in range(1,B+1):
        temp=0
        for j in range(1,A+1):
            for k in range(1,C+1):
                if(i*i<((j-1)*(k-1))):
                    temp+=1
                    ct+=1
                    #print(j,i,k)
        print(temp)
    print(ct%mod)
