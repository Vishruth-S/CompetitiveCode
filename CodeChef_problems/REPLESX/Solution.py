
# cook your dish here
try:
    t=int(input())
    for _ in range(t):
        n,x,p,k=list(map(int,input().split()))
        arr=list(map(int,input().split()))
        arr.sort()    #Sorting the list in ascending order as given in question that, k-th smallest number in an array is the k-th number from the left when the array is sorted in non-decreasing order.
        if arr[p-1]==x :   # If  the p-th smallest element of the array is already equal to X , we don't need to perform any operration .
            print(0)
        elif k>=p and arr[p-1]>x :   # If the replacing no. is ahead of the p-th smallest element then we just need to find the nos. required to be replaced the before the p th smallest element .
            i=p-1
            cnt=0
            for j in range (i,-1,-1):
                if arr[j]>x:
                    cnt +=1
            print(cnt)   # Then print it
        elif p>=k and arr[p-1]<=x : # If the replacing no. is behind  of the p-th smallest element then we just need to find the nos. required to be replaced the after the p th smallest element .
            i=p-1
            cnt=0
            for j in range (i,n):
                if arr[j]< x :
                    cnt +=1
            print(cnt)  #Then print it
        else:
            print(-1)  #If the above conditions don't satisfy, then it is not possible to reach out solution through any no. of operation.
            
except EOFError as t : pass
