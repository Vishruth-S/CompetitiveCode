class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        vector<int> nums_cpy=nums; //making a copy of the original array
        sort(nums_cpy.begin(),nums_cpy.end()); //sorting the array
        int i=1;
        int j=nums.size()-1;
        int k=0;
       
       //for the 1st iteration, we copy numbers from the end of the sorted array
       //to the odd positions of the original array
       //in this way, the odd indices will be greater than its neighbours
        while(i<nums.size()){
           nums[i]=nums_cpy[j--];
           i=i+2;
          
        }
        //resetting the i to store the even indices 
        i=0;

        //for the 2nd iteration, we assign the even indices of the original array
        //using the decreasing values from the sorted array
        //in this iteration, even indices assigned will be less that its neighbouring 
         while(i<nums.size()){
           nums[i]=nums_cpy[j--];
           i=i+2;
          
        }
    }
};