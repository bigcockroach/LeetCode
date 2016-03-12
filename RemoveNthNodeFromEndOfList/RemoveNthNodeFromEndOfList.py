# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        f = s = head
        if n == 1:
            if head.next is None:
                head = None
                return head
            while f.next.next != None:
                f = f.next
            f.next = None
            return head
        for i in range(n-1):
            s = s.next
        while s.next != None:
            f = f.next
            s = s.next
        f.val = f.next.val
        f.next = f.next.next
        return head