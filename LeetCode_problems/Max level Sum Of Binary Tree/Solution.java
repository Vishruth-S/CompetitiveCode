//Solution in java
//here we ar calculation tha level where sum of all shibling is max in whole tree.

class Solution {
    public int maxLevelSum(TreeNode root) {
        if (root == null) return 0;
        int maxlevel = 1, maxSum = root.val, level = 1;
        //we are using queue to calculte sum level wise
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while (!q.isEmpty()) {
            int levelSum = 0, size = q.size();
            //size of queue will increse according to no of nodes present at any level
            //we will run a loop no. of sibling times and also add left and right childd of them in queue
            for (int i = 0; i < size; i++) {
                TreeNode node = q.poll();
                if (node.left != null) q.offer(node.left);
                if (node.right != null) q.offer(node.right);
                levelSum += node.val; //adding sum of sibling
            }
            //here we will update  max level if any level has max sum than previous max sum.
            if (levelSum > maxSum) {
                maxSum = levelSum;
                maxlevel = level;
            }
            level++;
        }
        return maxlevel;
    }
}