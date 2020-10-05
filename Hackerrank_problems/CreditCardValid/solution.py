# Simple Python Program which mainly satisfies the required conditions on the Problem Statement using IF statements
# Shows the implementation of array to string and string methods
# Refer to the below information for checking validity of a Credit Card
# 1. A credit card contains 16 digits, starting with 4,5 or 6, all continuous or separated 4 at a time by 
#    '-' as a separator, and no other separator
# 2. A credit card number contains only numbers and not any other character
# 3. No credit card has 4 digits continuously

# First if statement checks for for 2 conditions, 1 is if there are 6 digits, 2 is that there are no other separators than '-'
# Second try catch block checks if there is no character present in the string, as a string cannot be converted to int if
#       it has characters, 2nd condition
# Thrid if checks for the 3rd condition
# Last if checks for the second part of the 1st Condition

# Function which defines the params for validity of a credit card
def credit_card_check(string):
    number_str = string.replace('-', '')
    if not len(number_str) == 16:
        print("Invalid")
        return
    try:
        number = int(number_str)
    except:
        print("Invalid")
        return
    for i in range(12):
        if number_str[i] == number_str[i+1] == number_str[i+2] ==  number_str [i+3]:
            print("Invalid")
            return
    number_split_list = string.split("-")
    for split in number_split_list:
        if not (len(split) == 4 or len(split) == 16):
            print("Invalid")
            return
    if not (string[0] == '4' or string[0] == '5' or string[0] == '6'):
        print("Invalid")
        return
    print("Valid")

# Loop for iterating over number of test cases
for _ in range(int(input())):
    string = str(input())
    credit_card_check(string)