""" Node is defined as
class node:
  def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
"""
 
# Retusn true if the given tree is a BST and its values
# >= min and <= max
INT_MAX = 4294967296
INT_MIN = -4294967296
def isBSTUtil(node, mini, maxi):
     
    # An empty tree is BST
    if node is None:
        return True
 
    # False if this node violates min/max constraint
    if node.data < mini or node.data > maxi:
        return False
 
    # Otherwise check the subtrees recursively
    # tightening the min or max constraint
    return (isBSTUtil(node.left, mini, node.data -1) and
          isBSTUtil(node.right, node.data+1, maxi))
          
def check_binary_search_tree_(root):
    return (isBSTUtil(root, INT_MIN, INT_MAX))