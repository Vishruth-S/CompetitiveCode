/*we know, if a = b then a xor b = 0
here all numbers are occurring twice except one, so if we xor all numbers we will get that single number
For example a[3] = {1,1,2}, then 1^1^2 = 2, which is our ans*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};
