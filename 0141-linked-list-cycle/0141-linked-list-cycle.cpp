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
        unordered_map<ListNode*, int > mp;
        
        while(head != nullptr){
            if(mp.find(head)!=mp.end()){
                return true;
            }
            else{
                mp[head]++;
                head = head->next;
            }
        }
        return false;
    }
};