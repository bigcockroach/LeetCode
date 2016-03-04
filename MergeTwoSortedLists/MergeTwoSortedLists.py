# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if l1 == None and l2 == None:
            return None
        if l1 == None and l2 != None:
            return l2
        if l1 != None and l2 == None:
            return l1
        tmp1 = l1
        tmp2 = l2
        if l1.val < l2.val:
            l3 = ListNode(l1.val)
            tmp1 = l1.next
        else:
            l3 = ListNode(l2.val)
            tmp2 = l2.next
        tmp3 = l3
        while tmp1 != None and tmp2 != None:
            if tmp1.val < tmp2.val:
                tmp3.next = tmp1
                tmp1 = tmp1.next
                tmp3 = tmp3.next
            else:
                tmp3.next = tmp2
                tmp2 = tmp2.next
                tmp3 = tmp3.next
        if tmp1 == None and tmp2 != None:
            tmp3.next = tmp2
            return l3
        if tmp1 != None and tmp2 == None:
            tmp3.next = tmp1
            return l3
        return l3