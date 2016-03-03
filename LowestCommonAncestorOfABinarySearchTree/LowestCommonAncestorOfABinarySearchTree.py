# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    @classmethod
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        if p.val > root.val and q.val > root.val:
            root = root.right
            return Solution.lowestCommonAncestor(root, p, q)
        elif p.val < root.val and q.val < root.val:
            root = root.left
            return Solution.lowestCommonAncestor(root, p, q)
        else:
            return root