# Sum of All digits

(This was one interesting problem I solved, but is not there on Hackerrank/Codechef/Codeforces)

## Question:

You are given an integer I in the following format :
You are given two integers P and Q.
Integer I can be obtained by appending Q instances of P together.
For example, if P = 619 and Q = 4, then I = 619619619619.

Your task is, given P and Q find the sum of all the digits of I.
That sounds too simple, so lets take it up a notch.
Lets say the sum of all digits is S, then run the following pseudocode :

```
int SumOfDigits(S) :
    K <- Sum of Digits of S
    if K is a single digit number, return K
    else return SumOfDigits(K)
```

### INPUT
Input consist of two numbers P and Q separated by a space.

### OUTPUT
Print a single digit, the final digit when the numbers of I are continuously added.

### CONSTRAINTS
1 ≤ P ≤ 10^100000
**1 ≤ Q ≤ **10^5

### Sample Input
`148 3`

### Sample Output
`3`

### Explanation:
148 if written 3 times becomes 148148148
Sum of all digits of 148148148 is 39
Sum of all digits of 39 is 12
Sum of all digits of 12 is 3
Since 3 is a single digit, we will print 3

### Sample Input 2
`42 4`

### Sample Output 2
`6`

### Explanation:
42 if written 4 times becomes 42424242
Sum of all digits of 42424242 is 24
Sum of all digits of 24 is 6
Since 6 is a single digit, we will print 6
