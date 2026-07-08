// Problem : Remove Nth Node From End of List
// Slug    : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Lang    : C++
// Difficulty: Medium
// Synced  : 2026-07-08T05:22:04.999Z
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        for(int i = 1; i <= n; i++) {
            fast = fast->next;
        }
        if(fast == NULL) {
            return head->next;
        }
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);
        return head;
    }
};