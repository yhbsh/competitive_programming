# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True

        return self.compareNodes(root.left, root.right)

    def compareNodes(self, node1, node2) -> bool:
        if node1 is None and node2 is None:
            return True

        if node1 is None or node2 is None:
            return False

        if node1.val != node2.val:
            return False

        return self.compareNodes(node1.left, node2.right) and self.compareNodes(node1.right, node2.left)
        # Lets flip the nodes to compare the values.. Remember that is a 'mirror'
