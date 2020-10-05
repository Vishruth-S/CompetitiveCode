# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 2020

@author: Shrey1608
"""

# Approach : 1) we will use recursion technique to insert the element into a bst(Time complexity= O(H)(h is height of the tree)



#Solution : Recursion

class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        if not root:
            return TreeNode(val)
        if root.val> val:
            root.left=self.insertIntoBST(root.left,val)
        else:
            root.right=self.insertIntoBST(root.right,val)
        return root