/*
Input : Array containing the intervals
Return : Number of intervals remaining after removing the covered interval

Interval [a,b) is said to be covered by interval [c,d) if and only if c <= a and b <= d.

Logic : Initialise a variable count to 0.
        Iterate over  each interval and compare this with other intervals and check if the interval is covered.
        If the interval is covered then count value is increased and inner loop is broken and the next interval is chosen.
        The number of intervals remaining after removing the covered ones : 
            difference of length of the array and count (intervals.length - count) 
*/

class Solution {
    public int removeCoveredIntervals(int[][] intervals) {
        int count = 0;
        for(int i = 0; i < intervals.length; i++){
            for(int j = 0; j < intervals.length; j++){
                if(i == j) //to not compare the interval with itself
                    continue;
                if(intervals[j][0] <= intervals[i][0] && intervals[i][1] <= intervals[j][1]){
                    count++; //the interval is covered increment count
                    break;
                }
            }
        }
        return intervals.length - count; //returns intervals remaining
    }
}