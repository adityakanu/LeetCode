/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* Next = nullptr;
        ListNode* Prev = nullptr;
        
        while(head != nullptr){
            Next = head->next;
            head->next = Prev;
            Prev = head;
            head = Next;
        }
        return Prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr){
            return true;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseList(slow->next);
        slow = slow->next;
        
        
        while(slow != nullptr){
            if(head->val != slow->val){
                return false;
            }
            slow = slow->next;
            head = head->next;
        }
        return true;
        
    }
};