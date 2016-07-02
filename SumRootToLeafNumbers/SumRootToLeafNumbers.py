# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sumNumbers(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        return search(root, 0)

def search(root, val):
    if root.left is None and root.right is None:
        return 10 * val + root.val
    tmp = 0
    if root.left is not None:
        tmp += search(root.left, 10 * val + root.val)
    if root.right is not None:
        tmp += search(root.right, 10 * val + root.val)
    return tmp