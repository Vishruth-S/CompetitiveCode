/*time complexity -O(n),space complexity -O(1)*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        /*starting from the right side check upto which 
        index the array is non-decreasing*/
        
        while(j!=0&&nums[j]<=nums[j-1])
            j--;
        /* the array is in descending order which represents
        the maximum possible lexicographical permutation*/
        if(j==0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        j--;
        /*nums[j] will be swapped with the smallest number 
        greater than nums[j] on the right side*/
        for(int i=n-1;i>j;i--)
        {
            if(nums[i]>nums[j])
            {
              swap(nums[i],nums[j]);
              /* new nums[j] has greater value so, sort or just 
              reverse the array from j+1 th index to last*/
              reverse(nums.begin()+j+1,nums.end());
            return;
            }
        }
    }
};