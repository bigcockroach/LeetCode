# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        if len(nums) == 0:
        	return None
        if len(nums) == 1:
        	return TreeNode(nums[0])

        mid = len(nums) / 2
        root = TreeNode(nums[mid])
        left = nums[0:mid]
        right = nums[mid + 1:]
        root.left = self.sortedArrayToBST(left)
        root.right = self.sortedArrayToBST(right)
        return root