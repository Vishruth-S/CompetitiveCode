/*
AUTHOR: github.com/Sanjay235
LOGIC:
==========================================================================================
1. As the set of intervals provided are non-overlapping and sorted,
	we don't need to do additional sorting for ease of merge.
	
2. First traverse all intervals in the set for which end point is less than start point 
	of new interval and reach an overlapping interval with new interval.
	
	Here we keep pushing old intervals into resultant vector as these are non-overlapping with new interval.
	
3. Now keep merge old overlapping intervals with new interval until we are not able to merge
	i.e if current old interval start point less than equal to end point of new interval.
	
	(a). Update start point of merging interval with minimum of current old interval & new interval start points.
	
	(b). Update end point of merging interval with maximum of current old interval & new interval end points.
		
4. Push this merged interval into resultant vector.

5. Push the remaining intevals if any that don't overlap with new interval.
==========================================================================================

Time Complexity: O(n), where n - number of input intervals.
Space complexity: O(1), no additional variables are used except for the output vector, 
			which will not considered as it has to be returned.

==========================================================================================
*/
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        
        int index = 0;
        
	// Step - 2
        while(index < intervals.size() && intervals[index][1] < newInterval[0]){
            res.push_back(intervals[index++]);
        }
        
	// Step - 3
        while(index < intervals.size() && intervals[index][0] <= newInterval[1]){
            // Step - 3 (a)
	    newInterval[0] = min(newInterval[0], intervals[index][0]);
            
	    // Step - 3 (b)
	    newInterval[1] = max(newInterval[1], intervals[index][1]);
            
	    index++;
        }
        
	// Step - 4
        res.push_back(newInterval);
        
	// Step - 5
        while(index < intervals.size()){
            res.push_back(intervals[index++]);
        }
        
        return res;
    }
};
