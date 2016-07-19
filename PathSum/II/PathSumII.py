# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: List[List[int]]
        """
        res = []
        if root is None:
            return res
        Sum(root, res, [], sum, 0)
        return res

def Sum(root, res, tmp, sum, t_sum):
    if root is None:
        return
    t_sum = t_sum + root.val
    if root.left is None and root.right is None:
        if t_sum == sum:
            tmp.append(root.val)
            res.append(tmp)
            return
        else:
            return
    Sum(root.left, res, tmp + [root.val], sum, t_sum)
    Sum(root.right, res, tmp + [root.val], sum, t_sum)