# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution(object):
    def levelOrderBottom(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res = []
        path = 0
        subOrderBottom(root, res, path)
        return res

def subOrderBottom(root, res, path):
    if root is None:
        return
    if len(res) < path + 1:
        res.insert(0, [])
    res[-(path + 1)] += root.val,
    subOrderBottom(root.left, res, path + 1)
    subOrderBottom(root.right, res, path + 1)