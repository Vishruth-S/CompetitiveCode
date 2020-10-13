
'''
A positive integer N.
The task is to print a palindromic triangle of size N.

For example, a palindromic triangle of size  is:

1
121
12321
1234321
123454321
'''

#Here in for loop the range from 1 to input+1
#It prints the number raised to power 10 and then divide by 9 and the whole result is having power 2. 
#Then the palindrome integer is printed.
n = int(input())

for i in range(1, n+1):
    #to get the palindrome integer triangle i must be raised as power to 10 then divided by 9 
    #and stored in vaiable a.

    a = int((10**i/9)) 

    #a is squared and then the number becomes palindromic and printed.
    print(a**2)
