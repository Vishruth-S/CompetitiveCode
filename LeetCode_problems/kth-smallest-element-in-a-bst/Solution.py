# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 2020

@author: Shrey1608
"""
# Approach :1) Recursive inorder traversal i.e first do a inorder traversal which is a method of Dfs and then just follow the recursion(Time complexity= O(N)(h is height of the tree)

#Solution : 1)Recursive inorder traversal
class Solution:
    def inorder(self,root,output):
        if root == None:
            return
        else:
            self.inorder(root.left,output)
            output.append(root.val)
            self.inorder(root.right,output)
            
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        output=[]
        self.inorder(root,output)
        return output[k-1]