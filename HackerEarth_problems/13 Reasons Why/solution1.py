'''
Problem: 13 Reasons Why
Given 3 integers A, B, C. Do the following steps-
    Swap A and B.
    Multiply A by C.
    Add C to B.
    Output new values of A and B.
'''

# When ran, you will see a blank line, as that is needed for the submission.
# If you are debugging and want it to be easier, change it too
# input = input("Numbers: ")

# Collects the input
input = input()
# Puts the input in the list, it's cutting them due to the space between the numbers.
inputList = input.split(" ")

# Since A and B are being swapped, A is given inputList[1], which was B's input. Vice Versa for B.
# C is just given the third input, which was C.
A = int(inputList[1])
B = int(inputList[0])
C = int(inputList[2])

# Multiplies A * C.
A = A * C
# Adds C + B.
B = C + B

# Converts them to strings since the submission needs to be one line.
A = str(A)
B = str(B)

# Prints the answer.
print(A, B)
