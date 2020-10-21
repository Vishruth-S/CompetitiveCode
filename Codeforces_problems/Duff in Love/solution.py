import math
 
num = int(input())
lovely = 1
 
for i in range(2, int(math.sqrt(num)) + 1):
    if num % i == 0:
        lovely *= i
        num //= i
        while(num % i == 0):
            num //= i
 
if num > 1:
    lovely *= num
 
print(lovely)