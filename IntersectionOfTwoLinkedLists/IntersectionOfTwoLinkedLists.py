# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        if headA is None or headB is None:
            return None
        len_list1 = 0
        len_list2 = 0
        list_1 = headA
        list_2 = headB
        while list_1 is not None:
            list_1 = list_1.next
            len_list1 += 1
        while list_2 is not None:
            list_2 = list_2.next
            len_list2 += 1
        if list_1 != list_2:
            return None
        diff = abs(len_list1 - len_list2)
        if len_list1 > len_list2:
            h1 = headA
            h2 = headB
        else:
            h1 = headB
            h2 = headA
        while diff > 0:
            h1 = h1.next
            diff -= 1
        while h1 != h2:
            h1 = h1.next
            h2 = h2.next
        return h1