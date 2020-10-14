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
//perform inorder traversal(any traversal can be used)
    void traversal(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        traversal(root->left,v);
        v.push_back(root->val);
        traversal(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
//add elements of tree1 in v
        traversal(root1,v);
//add elemets of tree2 in v
        traversal(root2,v);
//sort to get the ans in ascending order
        sort(v.begin(),v.end());
        return v;
    }
};
