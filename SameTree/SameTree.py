# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if p == None and q == None:
        	return True
        elif p != None and q == None:
        	return False
        elif p == None and q != None:
        	return False
        else:
        	if p.val != q.val:
        		return False
        	else:
        		left = Solution.isSameTree(p.left, q.left)
        		right = Soultion.isSameTree(p.right, q.right)
        		return left & right