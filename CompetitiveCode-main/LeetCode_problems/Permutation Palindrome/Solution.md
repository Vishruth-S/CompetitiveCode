## Solution(in python)

```python 

'''
Basic requirement for the number to be palindrome is that it must contain letters in multiple of 2 
and only '0' or '1' odd chracters
'''
from collections import Counter
def pali(str):
    temp = []
    sum = 0
    for i in str:
        if(i.isalpha()):
            temp.append(i.lower())
    counts = Counter(temp)                  #Returns a dictionary containing the count of each character
    print(counts)
    for y in counts.values():               #checks the number of odd numbered characters 
        if y%2!=0:                          #if its greater than 2 than the number cannot be palindrome
            sum+=1
    if sum < 2:
        return True
    else:
        return False

mystring = 'ara'
print(pali(mystring))

```
