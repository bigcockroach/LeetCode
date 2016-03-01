# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if root == None:
        	return root
        self.doInvertTree(root)
       	return root

    def doInvertTree(self, root):
    	if root == None:
    		return
    	tmp = root.left
    	root.left = root.right
    	root.right = tmp
    	self.doInvertTree(root.left)
    	self.doInvertTree(root.right)
    	return