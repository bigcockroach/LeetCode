# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []
        tmp = []
        if root is None:
            return res
        while True:
            while root:
                res.append(root.val)
                tmp.append(root)
                root = root.left
            if len(tmp) == 0:
                return res    
            node = tmp.pop()
            root = node.right
#         res = []
#         dfs_preorder(root, res)
#         return res

# def dfs_preorder(root, res):
#     if root is None:
#         return
#     res += root.val,
#     if root.left:
#         dfs_preorder(root.left, res)
#     if root.right:
#         dfs_preorder(root.right, res)