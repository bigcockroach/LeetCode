# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        if head == None or head.next == None:
            return True
        # find the middle of the LinkedList
        fast = head
        slow = head
        while fast != None and fast.next != None:
            fast = fast.next.next
            slow = slow.next
        
        if fast != None:
            slow.next = self.Reverse(slow.next)
            slow = slow.next
        else:
            slow = self.Reverse(slow)
        
        while slow != None:
            if slow.val != head.val:
                return False
            slow = slow.next
            head = head.next
        return True
    
    
    def Reverse(self, head):
        if head is None or head.next is None:
            return head
        prev = None
        while head != None:
            curr = head
            head = head.next
            curr.next = prev
            prev = curr
        return prev
        