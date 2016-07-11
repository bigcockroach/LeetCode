# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
class Solution(object):
    def sortedListToBST(self, head):
        """
        :type head: ListNode
        :rtype: TreeNode
        """
        list_len = 0
        node = head
        self.cur = head
        while node is not None:
            list_len += 1
            node = node.next
        root = self.buildTree(0, list_len - 1)
        return root

    def buildTree(self, start, end):
        if start > end:
            return
        mid = start + (end - start) / 2
        left = self.buildTree(start, mid - 1)
        root = TreeNode(self.cur.val)
        root.left = left
        self.cur = self.cur.next
        root.right = self.buildTree(mid + 1, end)
        return root