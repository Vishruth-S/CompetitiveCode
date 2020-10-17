//Refer this link :
https://www.interviewbit.com/problems/preorder-traversal/
to understand implementation.
/**
 * Definition for binary tree defines it as the following structure
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 //The following function explains the pre-order traversal of a Binary Tree , i.e.
 // node--leftchild--right child :being its basic form.
    void solve(TreeNode *A,vector<int> & r)
    {   
        if(A==NULL) return;
        r.push_back(A->val);
        solve(A->left,r);
        solve(A->right,r);
    }

//The following function shows how we can call the pre-order traversal function.

vector<int> Solution::preorderTraversal(TreeNode* A)
{
    vector<int> r;
    solve(A,r);
    return r;
}
