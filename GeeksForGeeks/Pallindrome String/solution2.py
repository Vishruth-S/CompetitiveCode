"""
Palindrome checker
author: @fr4nkl1n-1k3h
"""

def palindromeCheck(string: str) -> str:
    """
    This function checks if a string is a palindrome
    by comparing a string with it's reverse
    """
    
    # convert the string to all lower case
    lower_string = string.lower()
    
    # create a reversed version of the string
    string_reverse = lower_string[::-1]
    
    # compare the string with its reverse
    if lower_string == string_reverse:
        return True # string is a palindrome
    else:
        return False # string is not a palindrome

# Test case 1
print(palindromeCheck("RaCecAr")) # returns True

# Test case 2
print(palindromeCheck("Palindrome")) # returns False

# Test case 3
print(palindromeCheck("abba")) # returns True
