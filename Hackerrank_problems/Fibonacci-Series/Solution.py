# Let's take the input series from the User
# First 2 elements indicates series...
# 3rd element indicates the nth term to find in the fibonacci series.
x=input("").split(' ')

# Put the first element in series in x[0] & second element in x[1]
first=int(x[0])
second=int(x[1])

# Convert the data-type into Integer for more convienence
r=int(x[2])
r-=2

# The first two series indicates the Fibonacci series. 
# The first two terms of the sequence are first and second, which gives us a modified Fibonacci sequence of { 0,1,1,2,3,5...}
# if n=3. it will return 3rd element.
for g in range(r):
    z=first
    zz=second
    second=zz*zz+z # Updating until the nth term
    first=zz # next series of Fibonacci series.
    
# Let's print the nth value which was stores in second element   
print(second)
