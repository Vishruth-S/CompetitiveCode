/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    // Approach : Using a queue and Adding a dummy node after every level to separate different levels.
    public List<List<Integer>> levelOrder(TreeNode node) {
      // Making a queue to add one level then adding dummy node and their children afterwards.
          Queue<TreeNode>q= new ArrayDeque<>();
      List<List<Integer>> ans =  new ArrayList () ;
        if(node==null)
            return ans;
    q.add(node);
    TreeNode level= new TreeNode();
    level.val=Integer.MIN_VALUE;
    q.add(level);   // Adding dummy node;
         List<Integer> no=new ArrayList<Integer>();
    while(q.size()!=0)
    {
        // remove the parent node, add it in current list and then add its children.
      TreeNode temp=q.remove();   
   
        no.add(temp.val);
         if(temp.left!=null)
        {
            q.add(temp.left);
        }
        if(temp.right!=null)
        {
            q.add(temp.right);
        }
        // if peek contains dummy node, add the current list in ans and initialize it with new List and add dummy node at the end of queue.
        if(q.peek()==level)
        {
            q.remove();
            ans.add(no);
            no=new ArrayList<Integer>();
            if(q.size()!=0) // make sure to add dummy node only if queue is not empty.
            q.add(level);
        }
    }
        return ans;
}
}
