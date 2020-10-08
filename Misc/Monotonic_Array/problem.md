# Montonic Array
Write a function that takes in an array of integers and returns a boolean representing whether the array is monotonic.

An array is said to be monotonic if its elements, from left to right, are entirely non-increasing or entirely non-decreasing.

## Example
Input: [-1, -5, -10, -1100, -1100, -1101, -1102, -9001]  
Output: True  
**Explanation**    
The given input is monotonic because every subsequent number is
either equal to or less than the previous number.

## Example 2
Input: [1, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 7, 9, 10, 11]  
Output: False  
**Explanation**    
The given input is not monotonic because after the number 8, number 7 is present which changes the flow of purely increasing to non-monotonic
