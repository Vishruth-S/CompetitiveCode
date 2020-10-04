# Simple Python Program which mainly satisfies the required conditions on the Problem Statement using IF statements
# Shows the implementation of array to string and string methods

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