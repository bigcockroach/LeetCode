# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None:
        	return head
        cur = head
        tmp = cur.next
        while cur != None:
        	if tmp == None:
        		cur.next = tmp
        		cur = cur.next
        	else:
        		if cur.val == tmp.val:
        			tmp = tmp.next
        		else:
        			cur.next = tmp
        			cur = cur.next
        return head