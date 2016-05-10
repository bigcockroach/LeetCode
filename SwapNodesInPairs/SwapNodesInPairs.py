# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        pre = self
        pre.next = head
        while pre.next is not None and pre.next.next is not None:
            a = pre.next
            b = pre.next.next
            pre.next = b
            a.next = b.next
            b.next = a
            pre = a
        return self.next