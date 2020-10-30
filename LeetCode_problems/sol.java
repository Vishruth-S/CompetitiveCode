class Solution {
    public int firstMissingPositive(int[] nums) {
        int i = 0;
        int n = nums.length;
        while(i < n) {
            //Put each positive number less than or equal to n and greater than 0 in its right place that will be val-1;
            if(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1])   
            {  int temp=nums[nums[i]-1];
               nums[nums[i]-1]=nums[i];
            nums[i]=temp;
            }
             
            else
                i++;
        }
        for(i = 0; i < n; i++) {
            if(nums[i] != i + 1)    // check which is not at right place is our answer
                return i + 1;
        }
        return n + 1;
        
        
        
        
    }
}