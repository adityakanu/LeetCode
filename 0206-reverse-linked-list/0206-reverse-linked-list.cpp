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
    
    ListNode* reverseList(ListNode* head) {
//         // ---- iterative solution
//         ListNode* prev_pt = nullptr;
//         ListNode* curr_pt = head;
//         ListNode* next_pt;
        
//         while(curr_pt != nullptr){
//             next_pt = curr_pt->next;
//             curr_pt->next = prev_pt;
            
//             prev_pt = curr_pt;
//             curr_pt = next_pt;
//         }
//         head = prev_pt;
//         return head;
        
        // ---- recursive solution
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        
        ListNode* node = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return node;
    }
};