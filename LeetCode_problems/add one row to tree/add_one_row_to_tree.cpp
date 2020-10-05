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
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1){
            TreeNode*n= new TreeNode(v);
            n->left=root;
            return n;
        }
        insert(root,v,1,d);
        return root;
    }
    void insert(TreeNode* root,int v,int d,int depth){
        if(root==NULL){
            return;
        }
        if(d==depth-1){
            TreeNode* shift = root->left;
            root->left= new TreeNode(v);
            root->left->left= shift;
            shift= root->right;
            root->right= new TreeNode(v);
            root->right->right= shift;
        }
        else{
            insert(root->left,v,d+1,depth);
            insert(root->right,v,d+1,depth);
        }
    }
};
