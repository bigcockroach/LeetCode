# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def rob(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
    	value, l, r = self._rob(root)
    	return value

    def _rob(self, node):
    	if node == None:
    		return 0, 0, 0
    	left, ll, lr = self._rob(node.left)
    	right, rl, rr = self._rob(node.right)
    	return max(node.val + ll + lr + rl + rr, left + right), left, right