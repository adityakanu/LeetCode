# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head, prev = None, nex = None):
        prev = None
        nex = None
        
        while head != None:
            nex = head.next
            head.next = prev
            prev = head
            head = nex
        
        return prev
    
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        if((head == None) or (head.next == None)):
            return True
        
        slow = head
        fast = head
        
        while((fast.next != None) and (fast.next.next != None)):
            slow = slow.next
            fast = fast.next.next
        
        slow.next = self.reverseList(slow.next)
        slow = slow.next
        
        
        while slow != None:
            if(head.val != slow.val):
                return False
            head = head.next
            slow = slow.next
            
        
        return True