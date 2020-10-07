#Here in for loop the range from 1 to input+1
#It prints the number raised to power 10 and then divide by 9 and the whole result is having power 2. 
#Then the integer is printed.
for i in range(1,int(input())+1): 
    print(int((10**i/9))**2)
