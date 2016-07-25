# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseBetween(self, head, m, n):
        """
        :type head: ListNode
        :type m: int
        :type n: int
        :rtype: ListNode
        """
        if head is None:
            return head
        pre_head = ListNode(None)
        pre_head.next = head
        pre = pre_head
        for i in range(m - 1):
            pre = pre.next
        start = pre.next
        next_start = start.next
        for i in range(n - m):
            start.next = next_start.next
            next_start.next = pre.next
            pre.next = next_start
            next_start = start.next
        return pre_head.next