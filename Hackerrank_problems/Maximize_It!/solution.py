# get inputs K and M
K, M = [int(x) for x in input().split()]
# create an empty list
arrayN = []
# get inputs, k lines where first element is ignored
for _i_ in range(K):
    arrayN.append([int(x) for x in input().split()][1:])

# necessary import
from itertools import product

# find all possible combinations
possible_combination = list(product(*arrayN))

# function computation
def func(nums):
    return sum(x*x for x in nums) % M

# find and print the maximum value achievable by checking every combination
print(max(list(map(func, possible_combination))))
