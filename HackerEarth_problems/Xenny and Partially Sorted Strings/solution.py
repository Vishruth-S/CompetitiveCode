'''
Problem:  Xenny and Partially Sorted Strings
Accept number of testcases as t
for each test case:
    Given 3 integers N, K, M for each test case. Do the following steps-
        Accept all N number of strings and store them in a list
        sort the list by only considering first m charcaters in every element of list 
        output the Kth element from the above sorted list
'''
#Accept the first integer which denotes the number of testcases
#For accepting input as int use int() function while accepting the input()
#The accepted  input is stored in variable t
t=int(input())


#Now iterating through every testcase i.e for each testcase
#As we neednot store the number of that iteration we can use '_' here
for _ in range(t):
    
    #Accept 3 integers N,K,M respectively 
    #input() function accepts the input
    #split function is used to convert the accepted input in to a list based on delimiters like space or empty
    #int function is used to convert the accepted input to Integers
    #map function maps or applies the int function to the each and every element of list and assigns to n,k,m variables
    n,k,m=map(int,input().split())
    
    #Declaring an empty list to store 'n' strings 
    l=[]

    #As n denotes the number of strings ,we use a for loop to accept input 'n' times
    for _ in range(n):

        #In each iteration an input is accepted using input() and then converted to string
        #We use append method of list to store the accepted string for future computation
        l.append(str(input()))

    #Hence by end of 'n' interations we will have a list containing of 'n' string which need to be sorted
    #The sorting need to be done based on only first m charcaters of each string in the list
    #List has inbuilt sort method to sort elements in  a list
    #Sort method has 2 paramenters 
       #reverse: It accepts a boolean value(true/false) i.e to sort in descending or acending order
       #key: On what basis/condition/criteria we need to sort the list(like sort based on lengths etc)
       #Incase of sorting on criteria of lengths we use len function i.e key=len will be assigned
       #This will make the list sorted based on length of strings
    
    #We can use lambda which is an anonmyous function
    #Hence in order to sort based on first 'm' charcaters of each element we assign as follows
        #key=lambda x:x[0:m]
        #Here x[0:m]------>returns first m charcater of an element
        #key condition is applied to each and every element of the list
        #So as all the first m charcaters are identified sorting is done based on them
    #sort function is an inplace function which means that it sorts and places the sorted order in the same list, here it is 'l'
    l.sort(key=lambda x:x[0:m])

    #As we need kth string ,for suppose we want 2nd string will be at index '1' i.e (2-1)
    #Therefore similarly if we want kth string then we need to access (k-1) index
    print(l[k-1])
