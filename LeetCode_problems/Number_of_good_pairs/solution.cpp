// Given an array of integers nums.
// A pair (i,j) is called good if nums[i] == nums[j] and i < j.
// Return the number of good pairs.

// O(n^2)
//Solution 1
// the idea here is basically that we are just keeping the track of list of elements that are equal to the element
// for that we used two for loops


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;++i){
            for(int j=i+1;j<nums.size();++j){
                if(nums[i]==nums[j]){
                    count+=1;
                }
            }
        }
        
        return count;
    }
};


// solution 2
// time complexity O(n) and space complexity O(n) since we have used map data structure 

#include<map>
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    map <int,int> counts;
    // here we have used counts for storing the number of occurances of a number 
    int count=0,number;

    int length=nums.size();

    for(int i=0;i<nums.size();++i){
        counts[nums[i]]+=1;
    }

    int eq;
    for(auto it:counts){
        eq=it.second;
        count=count+((eq)*(eq-1))/2;
        // the equation  ((eq)*(eq-1))/2 is came from sum of n natrural numbers
    }
    return count;

    }
};



