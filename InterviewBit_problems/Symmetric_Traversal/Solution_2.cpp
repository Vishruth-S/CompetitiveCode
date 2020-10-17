/*
THE SYMMETRIC TRAVERSAL OF BINARY TREE IS  ONE OF THE MOST USED CONCEPTS FROM THE TOPIC 
Refer this link :
https://www.interviewbit.com/problems/inorder-traversal/
to understand implementation.

*/

/**
 * Definition for binary tree defines it as the following structure
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 //The following function explains the inorder traversal of a Binary Tree , i.e.
 // leftchild--node--right child :being its basic form.
 void solve(TreeNode* A,vector<int> & result)
    { if(A==NULL) return ;//BASE CASE IS IMP. ;in return nothing as void in func header
        solve(A->left,result);
        result.push_back(A->val);
        solve(A->right,result);
 }

 //The following function shows how we can call the inorder traversal function.

vector<int> Solution::symmetricTraversal(TreeNode* A)
{
    vector<int> result;
    solve(A,result);
    return result;
}
