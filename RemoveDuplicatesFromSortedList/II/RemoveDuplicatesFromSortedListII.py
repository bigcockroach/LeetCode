# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        pre_head = ListNode(None)
        pre_head.next = head
        pre = pre_head
        cur = head
        while cur is not None:
            if cur.next is None:
                if pre.next == cur:
                    cur = cur.next
                else:
                    pre.next = None
                    cur = cur.next
            else:
                if cur.next.val == cur.val:
                    cur = cur.next
                else:
                    if pre.next == cur:
                        pre = cur
                        cur = cur.next
                    else:
                        cur_next = cur.next
                        pre.next = cur_next
                        cur.next = None
                        cur = cur_next
        return pre_head.next