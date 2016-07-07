# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return None
        if head.next is None:
            return None
        if head.next.next is None:
            return None
        fast = head.next.next
        slow = head.next
        while True:
            if fast == slow:
                break
            if fast is None:
                return None
            if fast.next is None:
                return None
            if fast.next.next is None:
                return None
            fast = fast.next.next
            slow = slow.next
        slow = head
        while True:
            if slow == fast:
                return slow
            slow = slow.next
            fast = fast.next