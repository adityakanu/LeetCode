/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Floyd's cycle-finding algorithm 
        // tortoise hare algorithm
        // the intuition is that fast will catch up to slow as it will decrease the distance between themseleves by one. and if they don't that means there's no cycle
        
        if(head == NULL) return false;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow)
                return true;
        }
        
        return false;
    }
};