# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []
        tmp = []
        while True:
            while root:
                tmp.append(root)
                root = root.left
            if len(tmp) == 0:
                return res
            node = tmp.pop()
            res.append(node.val)
            root = node.right
#         res = []
#         dfs_inorder(root, res)
#         return res
        
# def dfs_inorder(root, res):
#     if root is None:
#         return
#     if root.left:
#         dfs_inorder(root.left, res)
#     res += root.val,
#     if root.right:
#         dfs_inorder(root.right, res)