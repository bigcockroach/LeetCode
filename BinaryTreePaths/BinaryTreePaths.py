# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution(object):
    def binaryTreePaths(self, root):
        """
        :type root: TreeNode
        :rtype: List[str]
        """
        if root is None:
            return []
        res = []
        dfs_Path(root, '', res)
        return res

def dfs_Path(root, tmp, res):
    if root.left:
        dfs_Path(root.left, tmp + str(root.val) + '->', res)
    if root.right:
        dfs_Path(root.right, tmp + str(root.val) + '->', res)
    if root.left is None and root.right is None:
        tmp += str(root.val)
        res += tmp,
        return