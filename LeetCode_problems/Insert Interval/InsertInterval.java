class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {
        List<int[]> list = new ArrayList();
	//We will store the answers in a List of Interval (Arrays of size 2)

        for (int[] in : intervals) {
		// iterating over the intervals using enhanced for loop

            if (in[1] < newInterval[0]) {
		/* if the end of current interval is less than the start of the new interval to be inserted, we simply add the current interval to our result*/
                list.add(in);
            } 

		else if (newInterval[1] < in[0]) {
		if (in[1] < newInterval[0]) {
		/* if the end of new interval to be inserted is less than the start of the current interval , we simply add the new interval to our result and change our element to be added to the current element */

                list.add(newInterval);
                newInterval = in;
            } 
		
		else {
		/* In this case we have overlapping intervals and we need to merge the intervals, for this we select the starting point as the minimum of new interval and the current interval, and the end point as the maximum of new interval and the current interval */

                newInterval[0] = Math.min(newInterval[0], in[0]);
                newInterval[1] = Math.max(newInterval[1], in[1]);
            }
        }

	/* we need to add the last interval explicitly as it isn't included in the answer */

        list.add(newInterval);

	// we use inbuilt method toArray of List Class to change the list to Array
        return list.toArray(new int[list.size()][]);
    }
}