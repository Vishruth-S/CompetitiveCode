/*
Input : Integer array and the targer to find.
Return : The index of the target in the array, if not found -1.

Logic : Initialize left and right to start and end index of the array.
        Perform a modified binary search to find the pivot index(the index from the array is rotated).
        In the modified binary search we check :
            if mid is greater than right(this means the mid is the unrotated part of the array) we move left to mid + 1
            else move right to mid(the mid is rotated part of the array, hence the pivot lies to the left).
            iterated until pivot is found(assigned to left).
        Once the pivot is found, binary search is performed either left to the pivot or the right to pivot 
        based on the target value. 
*/


class Solution {
    public int search(int[] nums, int target) {
        if(nums.length == 0)
            return -1;
        int left = 0, right = nums.length - 1;
        while(left < right){
            int mid = left + (right-left) / 2;
            if(nums[mid] > nums[right])
                left = mid + 1;
            else 
                right = mid;
        }
        int start = left;
        left = 0;
        right = nums.length - 1;
        if(target >= nums[start] && target <= nums[right])//if target lies right to the pivot.
            left = start;
        else        //target lies left to the pivot.
            right = start;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] > target)
                right = mid -1;
            else
                left = mid + 1;
        }
        return -1;
    }
}