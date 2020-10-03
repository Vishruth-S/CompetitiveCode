
# Importing the required Libraries
import math
import os
import random
import re
import sys




# Fuction For Counting the Valleys Traversed. Takes the number of steps(n) and The path(s[D/U]). Returns the Number. 
def countingValleys(n, s):
    count = 0
    number_of_valleys = 0                # Initialized Variables count and number_of_valleys with 0.
    for i in range(n):                   # Looping the steps traversed by the no. of steps given.
        if(s[i] == 'U'):                 # Check if the Step equal to 'U' Then Count Incremented by 1 
            count += 1
            if(count == 0):              # Check if After certain steps The counter reaches to 0, Means a valleys is trversed.
                number_of_valleys += 1   # Hence increment the number_of_valleys by one.
        elif(s[i] == 'D'):               # Check if the Step equal to 'U' Then Count Incremented by 1
            count -= 1
    return(number_of_valleys)            # Returning the number of valleys traversed.




# Check if the main is there and then run the main program.
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())                  # Taking the input from user. The number of steps in the hike.

    s = input()                       # A single string of Steps characters that describe the path (D/U).

    result = countingValleys(n, s)    # Calling the countingvalleys function, Return the number of valleys traversed 

    fptr.write(str(result) + '\n')    # Writing/Printing the Result

    fptr.close()                      # Closing the Program
