class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        for (auto i = nums.begin(); i != nums.end(); ++i) { 
        if (*i  == val) { 
            nums.erase(i);
            i--;
        } 
        elsec++;
    } 
  return c;
    }
};