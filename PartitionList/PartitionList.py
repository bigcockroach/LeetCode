# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def partition(self, head, x):
        """
        :type head: ListNode
        :type x: int
        :rtype: ListNode
        """
        if head is None:
            return head
        node = head
        less_head = ListNode(0)
        greater_head = ListNode(0)
        less = less_head
        greater = greater_head
        while node is not None:
            list_next = node.next
            if node.val < x:
                less.next = node
                less = less.next
                less.next = None
            else:
                greater.next = node
                greater = greater.next
                greater.next = None
            node = list_next
        less.next = greater_head.next
        return less_head.next