This was one interesting problem I solved, but is not there on Hackerrank/Codechef/Codeforces

Question:

You are given an integer I in the following format :
You are given two integers P and Q.
Integer I can be obtained by appending Q instances of P together.
For example, if P = 619 and Q = 4, then I = 619619619619.

Your task is, given P and Q find the sum of all the digits of I.
That sounds too simple, so lets take it up a notch.
Lets say the sum of all digits is S, then run the following pseudocode :

int SumOfDigits(S) :
    K <- Sum of Digits of S
    if K is a single digit number, return K
    else return SumOfDigits(K)

INPUT
Input consist of two numbers P and Q separated by a space.

OUTPUT
Print a single digit, the final digit when the numbers of I are continuously added.

CONSTRAINTS
1 ≤ P ≤ 10^100000
**1 ≤ Q ≤ **10^5

Sample Input
148 3

Sample Output
3