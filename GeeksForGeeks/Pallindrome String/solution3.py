# one-line solution for palindrome string

# check if a string is the same as its reverse
palindrome_check = lambda s: s[::-1] == s

#tests
palindrome_check("racecar")
palindrome_check("abba")
palindrome_check("palindrome')
