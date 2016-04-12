# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        f = head
        if head is None:
            return None
        while f.next != None:
            if f.next.val == val:
                f.next = f.next.next
            else:
                f = f.next
        if head.val == val:
            return head.next
        return head