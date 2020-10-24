/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    map<int,int> m;
    vector<int> post;
    TreeNode* solve(int* idx,int st,int end){
        if(st>end) return NULL;
        TreeNode* root=new TreeNode(post[*idx]);
        int p=m[post[*idx]];
        *idx=*idx-1;
        
        root->right=solve(idx,p+1,end);
        root->left=solve(idx,st,p-1);
    
        return root;
        
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++) m[inorder[i]]=i;
        post=postorder;
        int idx=post.size()-1;
        return solve(&idx,0,post.size()-1);
    }
};