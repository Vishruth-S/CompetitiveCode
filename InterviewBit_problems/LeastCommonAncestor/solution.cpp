/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//Function to find wether a node exists in a tree or not. 
bool find(TreeNode* root,int x) {
    if(!root) return 0;
    if(root->val==x) return 1;
    return (find(root->left,x)|find(root->right,x));
}

// Recursive function for the solution
TreeNode* solve(TreeNode* root, int B, int C) {

    if(!root) return NULL;    //Base condition - if we reach the leaves 

    if(root->val==B || root->val==C) {   //Base Condition - if any of the two given nodes is found then return that node
        return root;
    }

    TreeNode* left = solve(root->left,B,C);   // Recusrive call for left tree
    TreeNode* right = solve(root->right,B,C);   // Recusive call for right tree

    if(left && right) {   // If we have found both the given nodes then the current node is the LCA so return the current node
        return root;
    }
    else return (left)?left:right; // else return one of the two nodes which is not null
}


int Solution::lca(TreeNode* A, int B, int C) {

    if(find(A,B) && find(A,C)) {  //If both the given nodes exists in the tree 
        return solve(A,B,C)->val;
    } else {
        return -1; // Else return -1
    }
}