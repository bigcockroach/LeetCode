# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def flatten(self, root):
        """
        :type root: TreeNode
        :rtype: void Do not return anything, modify root in-place instead.
        """
        now = root
        while now:
            if now.left:
                pre = now.left
                while pre.right:
                    pre = pre.right
                pre.right = now.right
                now.right = now.left
                now.left = None
            now = now.right