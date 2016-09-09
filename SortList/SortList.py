# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def sortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None or head.next is None:
            return head
        middle = getmiddleofList(head)
        next = middle.next
        middle.next = None
        return merage(self.sortList(head), self.sortList(next))
    
def getmiddleofList(head):
    fast = head
    slow = head
    while fast.next is not None and fast.next.next is not None:
        slow = slow.next
        fast = fast.next.next
    return slow

def merage(list1, list2):
    prehead = ListNode(-1)
    cur = prehead
    while list1 is not None and list2 is not None:
        if list1.val < list2.val:
            cur.next = list1
            list1 = list1.next
        else:
            cur.next = list2
            list2 = list2.next
        cur = cur.next
    if list1 is None:
        cur.next = list2
    else:
        cur.next = list1
    return prehead.next