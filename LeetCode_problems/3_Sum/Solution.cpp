class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        vector<vector<int> > res;
        
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    int t=nums[j];
                    while(j<k && nums[j]==t) j++;
                } else if(nums[i]+nums[j]+nums[k]<0) j++;
                else k--;
            }
            
            while(i<n-2 && nums[i]==nums[i+1]) i++;
        }
        
        return res;
    }
};