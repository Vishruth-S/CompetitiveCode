# one-line solution for palindrome string

# check if a string is the same as its reverse
palindrome_check = lambda s: s[::-1] == s

#tests
print(palindrome_check("racecar"))
print(palindrome_check("abba"))
print(palindrome_check("palindrome"))
