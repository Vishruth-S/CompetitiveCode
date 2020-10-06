from collections import deque

class TreeNode:

    def __init__(self,val):
        self.val = val
        self.left = None
        self.right = None

def insert(root,node):
    if root is None:
        root = node
    else:
        if root.val < node.val:
            if root.right is None:
                root.right = node
            else:
                insert(root.right, node)
        else:
            if root.left is None:
                root.left = node
            else:
                insert(root.left, node)

def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)
        
# invert of binary tree means left elemtns goes to right and right element goes to left
# this is the most simple problem but sometimes confused when they see it first time
# so here is the solution

def invertTree(root):

    if root is None:
        return 0
    # invert the elements simple swapping
    root.left , root.right = root.right , root.left

    # left Invert 
    root.left = invertTree(root.left)

    # right invert
    root.right = invertTree(root.right)

    return root

root = TreeNode(5)
insert(root , TreeNode(3))
insert(root , TreeNode(8))
insert(root , TreeNode(2))
insert(root , TreeNode(4))
insert(root , TreeNode(7))
insert(root , TreeNode(9))
inorder(root)
print('Inverted')
inorder(invertTree(root))

