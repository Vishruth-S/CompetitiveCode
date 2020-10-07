'''
- Here we are taking a List A
- maxset() function will take the List A and find out the maximum non-negative subarray
- Firstly we are traversing the List A and storing the subarrays of positive numbers in subarr
- After that we are finding the sum of elements of first subarray and storing in mx
- After finding the sum we are traversing the subarr List and finding the maximum sum of the subrrays 
in subarr and also storing the subarray where sum is maximum in final variable
- If there is same sum present between two subarrays then we are checking the minimum length of the 
subarray and also storing the subarray in final
- At last returning the final variable which contains the maximum sum list and if there are more than 2 
subarrays then returning the subarray which has minimum length
'''

def maxset(A):
        subarr=[]
        pointer=0
        final=[]
        maxs=0
        minlen=0
        for i in range(len(A)):
            if A[i]>=0:
                continue
            else:
                subarr.append(A[pointer:i])
                pointer=i+1
        subarr.append(A[pointer:])
        mx=sum(subarr[0])
        for j in subarr:
            maxs=sum(j)
            if maxs>mx:
                mx=maxs
                final=j
            elif maxs==mx:
                if len(j)>minlen:
                    minlen=len(j)
                    final=j
        return final
    
if __name__=="__main__":
    A=[]
    print("Enter the elements in the array: ")
    A=list(map(int,input().split(" ")))
    B=maxset(A)
    print(B)