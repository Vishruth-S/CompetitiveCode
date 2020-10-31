/*
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


 int Symm(TreeNode* A,TreeNode* B)
 {
     if(A==NULL &&  B==NULL) return true; //tree is symmetric;only root node  left(such a case)
     if(A==NULL || B==NULL) return false;//after the above is checked ;see if node has only one child: then tree cannot be symmetric.
     //use following for the rest cases.
     return (A->val==B->val) && (Symm(A->left,B->right)) && (Symm(A->right,B->left));
      
 }

int Solution::isSymmetric(TreeNode* root) 
{
     if(root==NULL) return true;
     if(root->left==NULL && root->right==NULL) return true;
      return Symm(root->left,root->right);
    
    
}
