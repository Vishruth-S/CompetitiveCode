"""
solution 1
author: fr4nkl1n-1k3h
de ja vu
"""

def dejavu(string):
	if len(string) == len(set(string)):  #set() removes duplicates from a string. So if set(string) is same as actual string, then it is unique
		return "Unique"
	elif len(string) > len(set(string)):  #Else, it contains duplicates and hence not unique
		return "DeJa Vu"
		
str = input() # getting input
print(dejavu(str))  

# Test Case 1
# print(dejavu("aaafhgi"))

# Test Case 2
# print(dejavu("cakemog"))

# Test Case 3
# print(dejavu("caakemog"))
