/*
Sort by k in ascending order so that people with 0 people ahead are first (a.second > b.second)
If both have same k then make sure Larger Height is ahead as we will insert it first in the result and the addition of {smaller h,same k} ahead of it will not have any effect on it ( a.first < b.first;)

*/
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(), [](vector<int> a,vector<int> b)->bool{
           if(a[0]>b[0]) return true; 
           else if(a[0]==b[0]) return a[1]<b[1];
           else return false;
        });
        vector<vector<int>> ans;
        
        for(auto person:people)
        {
            ans.insert(ans.begin()+person[1],person);
        }
        return ans;
    }
};
