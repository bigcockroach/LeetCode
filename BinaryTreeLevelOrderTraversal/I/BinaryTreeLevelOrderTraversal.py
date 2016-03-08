# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res = []
        path = 0
        subOrder(root, res, path)
        return res

def subOrder(root, res, path):
    if root is None:
        return
    if len(res) < path + 1:
        res += [],
    res[path] += root.val,
    subOrder(root.left, res, path + 1)
    subOrder(root.right, res, path + 1)