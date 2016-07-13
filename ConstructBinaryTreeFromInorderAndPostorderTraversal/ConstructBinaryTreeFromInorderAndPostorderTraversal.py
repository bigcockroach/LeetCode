# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def buildTree(self, inorder, postorder):
        """
        :type inorder: List[int]
        :type postorder: List[int]
        :rtype: TreeNode
        """
        # if len(inorder) == 0:
        #     return None
        # root_val = postorder.pop()
        # mid = 0
        # for i in range(len(inorder)):
        #     if inorder[i] == root_val:
        #         mid = i
        #         break
        # root = TreeNode(root_val)
        # root.right = self.buildTree(inorder[mid + 1:], postorder)
        # root.left = self.buildTree(inorder[: mid], postorder)
        # return root
        if len(inorder) == 0:
            return None
        ileft = 0
        iright = len(inorder) - 1
        pleft = 0
        pright = len(postorder) - 1
        return build(inorder, postorder, ileft, iright, pleft, pright)

def build(inorder, postorder, ileft, iright, pleft, pright):
    if ileft == iright:
        return TreeNode(inorder[ileft])
    if ileft > iright or pleft > pright:
        return
    root_val = postorder[pright]
    root = TreeNode(root_val)
    index = inorder.index(root_val)
    index = index - ileft
    root_left = build(inorder, postorder, ileft, ileft + index - 1, pleft, pleft + index - 1)
    root_right = build(inorder, postorder, ileft + index + 1, iright, pleft + index, pright - 1)
    root.left = root_left
    root.right = root_right
    return root