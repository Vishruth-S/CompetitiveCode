
//Remove Element
//here we are given an array containing some elements along with the value to be removed from the array
//then return the count of remaining elements

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;//initialize the count to be 0
        for (auto i = nums.begin(); i != nums.end(); ++i) { //traversing the nums vector 
        if (*i  == val) { 
            nums.erase(i);   //if the iterator points to the value to be removed then we delete it 
            i--;  //decrement the iterator by 1
        } 
        else c++;//increment the count by 1
    } 
  return c; //here we return the count of remaining elements
    }
};