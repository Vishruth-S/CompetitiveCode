l1=[]
##Input number of elements in list
n=int(input())
##Input the elements in the list
l1=list(map(int,input().split()))
## Create a new list l2 to store the index(from 1 to number of elements in list1) of elements of list 1 
l2=[i for i in range(1,n+1)]
##Run a for loop from 1 till the length of list 1(l1)
for i in range(1,n+1):
    ##Find the Index of ith element of list (l1)
    x=l1.index(i)
    ##print(x)
    ##Now find which element is located at that index in list (l2)
    y=l2[x]
    ##Now find the index of this element (y) in list (l1)
    ##Finally print the element located at that index in list (l2)
    print(l2[l1.index(y)])
