# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
	# iteratively 
    def reverseList_1(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None or head.next == None:
        	return head
        pre = None
        cur = head
        while cur != None:
        	tmp = cur.next
        	cur.next = pre
        	pre = cur
        	cur = tmp
        return pre

    # recursively
    def reverseList_2(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None or head.next == None:
        	return head
        newHead = self.reverseList_2(head.next)
        head.next.next = head
        head.next = None
        return newHead