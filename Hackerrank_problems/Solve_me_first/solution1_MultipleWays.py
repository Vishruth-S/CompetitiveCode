#


# working
    # uses arithmatic method to add 2 given numbers
def solveMeFirst(a, b):
    return a + b


# working
    # uses Logical operators to add 2 numbers
    # for example considering the case a = 2, b = 4
    # binary representation of 2 is 010 and binary representation of 4 is 100
    # xor'ing 010 with 100 we get 110 which when converted to int gives 6

    # we have to notice xor gives output with either of the input is 1
    # so in case 2 ^ 2 we would get 0 which is wrong
    # to solve this we need to take consideration of carry bit too which can be done using the Logical AND function
def solvingUsingLogicalOperations(a, b):
    while b:
        a, b = (a ^ b), (a & b) << 1
    return a


num1 = int(input())     # takes user input and stores in in num1 with type as <int>
num2 = int(input())     # takes user input and stores in in num2 with type as <int>
res = solveMeFirst(num1, num2)      # calls the function names solveMeFirst and pass both the integer with it

print(res)      # print the output that is returned by the function

res = solvingUsingLogicalOperations(num1, num2)
print(res)





# more details on xor and addition without arithmatic functions
    # xor - https://en.wikipedia.org/wiki/Exclusive_or
    # xor in python - https://python-reference.readthedocs.io/en/latest/docs/operators/bitwise_XOR.html
    # addition of 2 numbers without arithmatic operation (extras) - https://stackoverflow.com/questions/365522/what-is-the-best-way-to-add-two-numbers-without-using-the-operator