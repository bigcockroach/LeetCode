# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res = []
        flag = True
        buildZZTree(root, res, flag, 0)
        return res

def buildZZTree(root, res, flag, depth):
    if root is None:
        return
    if len(res) <= depth:
        res.append([])
    if not flag:
        res[depth].insert(0, root.val)
    else:
        res[depth].append(root.val)
    buildZZTree(root.left, res, not flag, depth + 1)
    buildZZTree(root.right, res, not flag, depth + 1)
    return res