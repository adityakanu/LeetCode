# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:       

    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
#         if not head:
#             return head
        
#         slow = head
#         fast = slow.next
        
#         while slow and slow.next:
#             while fast:
#                 if slow.val > fast.val:
#                     temp = fast.val
#                     fast.val = slow.val
#                     slow.val = temp
#                 else:
#                     fast = fast.next
                    
#             slow = slow.next
#             fast = slow.next
            
#         return head
        if not head or not head.next: 
            return head
        
        fast = head.next
        slow = head
        
        while(fast and fast.next):
            slow = slow.next
            fast = fast.next.next
            
        start = slow.next
        slow.next = None
        
        l = self.sortList(head)
        r = self.sortList(start)
        
        return self.merge(l,r)
    
    def merge(self, l, r):
        if not l or not r:
            return l or r
        
        dummy = p = ListNode(0)
        
        while l and r:
            if l.val < r.val:
                p.next = l
                l = l.next
            else:
                p.next = r
                r = r.next
            p = p.next
            
        p.next = l or r
        return dummy.next
                
         