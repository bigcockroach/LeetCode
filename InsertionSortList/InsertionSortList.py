# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def insertionSortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        newhead = ListNode(0)
        newhead.next = head
        pre, cur = newhead, head
        while cur:
        	if cur.next and cur.next.val < cur.val:
        		while pre.next and pre.next.val < cur.next.val:
        			pre = pre.next
        		tmp = pre.next
        		pre.next = cur.next
        		cur.next = cur.next.next
        		pre.next.next = tmp
        		pre = newhead
        	else:
        		cur = cur.next
        return newhead.next