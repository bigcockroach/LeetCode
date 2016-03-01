# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        else:
            tmp_l = Solution()
            tmp_r = Solution()
            depth_l = tmp_l.maxDepth(root.left)
            depth_r = tmp_r.maxDepth(root.right)
            if depth_l > depth_r:
                return depth_l + 1
            else:
                return depth_r + 1