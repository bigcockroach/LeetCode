# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        if len(preorder) == 0:
            return None
        pleft = 0
        pright = len(preorder) - 1
        ileft = 0
        iright = len(inorder) - 1
        return build2(preorder, inorder, pleft, pright, ileft, iright)

def build2(preorder, inorder, pleft, pright, ileft, iright):
    if pleft > pright or ileft > iright:
        return
    if pleft == pright:
        return TreeNode(preorder[pleft])
    root = TreeNode(preorder[pleft])
    index = inorder.index(preorder[pleft])
    index = index - ileft
    left = build2(preorder, inorder, pleft + 1, pleft + index, ileft, ileft + index - 1)
    right = build2(preorder, inorder, pleft + index + 1, pright, ileft + index + 1, iright)
    root.left = left
    root.right = right
    return root