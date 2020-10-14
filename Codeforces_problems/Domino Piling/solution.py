m, n = map(int, input().split()) #taking m and n as input

#since each small domino is of size 2x1, it can be said that the total number of dominos which can be fitted
#is equal to MxN divided by 2, but this can give a decimal answer. What the question asks for is the maximum 
#number of complete squares.
#converting our decimal answer to int gives us the integer value of that number, leaving out the fractional part.
#thus we typecast our solution to int.
print(int(m*n/2))