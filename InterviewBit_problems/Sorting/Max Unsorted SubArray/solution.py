'''
- Here we are taking two examples with List A and List B
- subUnsort() function will take the List A to find out the maximum unsorted subList
- First of all we are taking one temporary List which will store the List A in b in the sorted form
- Comparing both the Lists b and A that if A is already sorted then there will be no unsorted subList 
and hence returning -1
- Otherwise if A is not sorted then we are traversing the List A and finding the elements which are not
equal at the position of the sorted List A and storing the index in the other list L
- At last returning the minimum and maximum value in List L which will tell the maximum unsorted array
'''

def subUnsort(A):
        b=sorted(A)
        L=[]
        if b==A:
            return [-1]
        else:
            for i in range(len(A)):
                if A[i]!=b[i]:
                    L.append(i)
            return [min(L),max(L)]

if __name__ == "__main__":
    A=[1,3,2,4,5]
    B=[1,2,3,4,5]
    print(A," -> ",subUnsort(A))
    print(B," -> ",subUnsort(B))
