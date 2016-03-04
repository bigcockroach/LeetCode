# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def oddEvenList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return head
        end = head
        len_list = 1
        while end.next is not None:
            end = end.next
            len_list += 1
        if len_list < 3:
            return head
        odd = head
        even = head.next
        count = 0
        if len_list % 2 == 0:
            num = len_list / 2
        else:
            num = (len_list - 1) / 2
        while count < num:
            odd.next = even.next
            even.next = None
            end.next = even
            end = end.next
            odd = odd.next
            even = odd.next
            count += 1
        return head