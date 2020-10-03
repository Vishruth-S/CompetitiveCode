Link: https://www.hackerrank.com/challenges/permutation-equation

# Explanation
Basically, the task of this problem is to find `indexOf(indexOf(x))`, where `x` is all numbers from 1 to length of the given array\
So, all what we need to do, is write our `indexOf()` function for java native arrays (because they don't have one), and use it for solution\
(Don't forget to do `+ 1` in some places, because task assumes that arrays start index will be 1, not 0
