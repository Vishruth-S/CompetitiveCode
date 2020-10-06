class Solution {
    public int[][] kClosest(int[][] points, int K) {
        PriorityQueue<int[]> maxHeap = new PriorityQueue<>((a, b) -> (b[0] * b[0] + b[1] * b[1]) - (a[0] * a[0] + a[1] * a[1]));
        //create a priority queue ( for max heap)
        for (int[] p : points) {
            maxHeap.offer(p); // add it in heap
            if (maxHeap.size() > K) {
                maxHeap.poll();
            }
        }
        int[][] ans = new int[maxHeap.size()][2]; // storage for calculating answers 
        int i = 0;
        while (!maxHeap.isEmpty()) {
            ans[i++] = maxHeap.poll();// increment i and key in the value in ans array which represents the k closest points 
        }
        return ans;
    }
}