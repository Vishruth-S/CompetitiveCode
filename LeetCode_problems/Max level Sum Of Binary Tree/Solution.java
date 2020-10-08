//Solution in java

class Solution {
    public int maxLevelSum(TreeNode root) {
        if (root == null) return 0;
        int maxlevel = 1, maxSum = root.val, level = 1;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while (!q.isEmpty()) {
            int levelSum = 0, size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode node = q.poll();
                if (node.left != null) q.offer(node.left);
                if (node.right != null) q.offer(node.right);
                levelSum += node.val;
            }
            if (levelSum > maxSum) {
                maxSum = levelSum;
                maxlevel = level;
            }
            level++;
        }
        return maxlevel;
    }
}