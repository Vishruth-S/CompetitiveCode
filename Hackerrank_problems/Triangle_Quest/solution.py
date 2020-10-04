# Used the fact that 9ths as decimals have repeating digits (1/9=.11111, 2/9=.22222) with powers of 10 to get the correct length of each number.  
# Completed in 2 lines as required by problem.
for i in range(1,int(input())): 
    print((10**(i)//9)*i)
