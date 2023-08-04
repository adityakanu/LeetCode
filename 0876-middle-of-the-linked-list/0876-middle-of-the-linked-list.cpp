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
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode* node = new ListNode();
        
        node = head;
        while(node->next != nullptr){
            cnt++;
            node = node->next;
        }
        
        int mid = cnt+1 >> 1;
        
        while(mid != 0){
            head = head->next;
            mid--;
        }
        return head;
    }
};