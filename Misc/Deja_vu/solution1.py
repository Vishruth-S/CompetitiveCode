"""
solution 1
author: fr4nkl1n-1k3h
de ja vu
"""

def dejavu(string):
	if len(string) == len(set(string)):
		return "Unique"
	elif len(string) > len(set(string)):
		return "DeJa Vu"
		
# Test Case 1
print(dejavu("aaafhgi"))

# Test Case 2
print(dejavu("cakemog"))

# Test Case 3
print(dejavu("caakemog"))