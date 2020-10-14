#Question Link
#https://www.codechef.com/problems/LAPD
mod=10**9+7 
for tc in range(int(input())):
    A,B,C=map(int,input().split()) #input the values
    
    ct=0
    for i in range(1,B+1):
        temp=0
        for j in range(1,A+1):
            for k in range(1,C+1):
                if(i*i<((j-1)*(k-1))): #checking for all values possible b^2<a*c
                    temp+=1
                    ct+=1 #keeping the count of the values
    print(ct%mod) #mod the result as mentioned in the question
