A = []                                # initialize matrix
for i in range(3):                       # user input
    a =[]
    for j in range(3):
        a.append(int(input()))
    A.append(a)

for i in range(3):                       # printing the array 
    for j in range(3): 
        print(A[i][j], end = " ") 
    print() 

sum1 = 0
sum2 = 0
for i in range(3):                      # iterates through the array
    for j in range(3):
        if((i+j)%2==0):                 # if (i+j) %2 = 0, sums the element at a[i][j] with sum1 
            sum1 += A[i][j];
        else:                           # else adds the element at a[i][j] with sum2
            sum2 += A[i][j];
print(sum1)                             # prints sum1
print(sum2)                             # prints sum2