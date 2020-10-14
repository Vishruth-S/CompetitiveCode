""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""
def build_list(root, nodes):
    """
    Put the tree elements in a list with the
    inorder traversal approach.
    """
    if root:
        build_list(root.left, nodes)
        nodes.append(root)
        build_list(root.right, nodes)
    else:
        return

def check_binary_search_tree_(root):
    """
    Verify if the nodes are in ascending order.
    If the nodes are not in asceding order then the
    tree is not a binary search tree otherwise it is.
    """
    nodes = []
    build_list(root, nodes)
    for i in range(len(nodes)-1):
        if nodes[i].data >= nodes[i+1].data:
            return False
    return True