//This is Problem 100.Plus One of leetcode.
//This problem seems fairly easy , and it is easy for most of the test cases but for the test cases which contains 9 in it, //becomes little tricky.

//Complexity:O(n) time and O(n) space complexity.

// Approach
//-We loop through the array backwards and we add 1 to the last element then we mod10 the last element to check if sum is greater //than 9 or not.
//-If it is greater than 9, then after mod10 operation, automaticlly 10 gets replaced by 0 and caary is set to 1 again.
//-We continue this process for all elements of array.
//-After for loop ends, if carry is 1, that means we need to create a new array to store this carry at the begining of that newly //created array.
//-Then we just copy old array elements to new array one by one and we return new array.
//-At last we return the old array.


class Solution {
    public int[] plusOne(int[] digits) {
	int carry = 1;        
    for(int i=digits.length-1;i>=0;i--){
        int sum = digits[i] + carry;
        digits[i] = (sum)%10;
        carry = (sum)/10;
    }
    
    if(carry!=0){
        int[] temp = new int[digits.length+1];
        temp[0] = carry;
        for(int i=0;i<digits.length;i++) temp[i+1] = digits[i];
        return temp;
    }
    return digits;
    }
}