class Solution {
    public static int sum=0;
    public static TreeNode help(TreeNode node) {
        
    if(node==null)
     return node;
    
    
     help(node.right);
    
     sum+=node.val;
     node.val=sum;
     help(node.left);
      
        return  node;
        
}
    public static TreeNode bstToGst(TreeNode node)
    {
        sum=0;
        TreeNode ans =help(node);
        return ans;
        
    }
    
}