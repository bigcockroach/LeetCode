# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def rightSideView(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []
        if root is None:
            return res
        pre = root
        tmp = []
        tmp.append(pre)
        while len(tmp) > 0:
            cnt = len(tmp)
            for i in range(cnt):
                cur = tmp[0]
                tmp.remove(cur)
                if cur.left:
                    tmp.append(cur.left)
                if cur.right:
                    tmp.append(cur.right)
                
            res.append(cur.val)
        return res