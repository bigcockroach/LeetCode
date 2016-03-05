# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if self.check(root) == -1:
        	return False
        else:
        	return True

    def check(self, root):
    	if root == None:
    		return 0
    	leftHight = self.check(root.left)
    	if leftHight == -1:
    		return -1

    	rightHight = self.check(root.right)
    	if rightHight == -1:
    		return -1

    	diff = abs(leftHight - rightHight)
    	if diff > 1:
    		return -1
    	else:
    		return max(rightHight + 1, leftHight + 1)