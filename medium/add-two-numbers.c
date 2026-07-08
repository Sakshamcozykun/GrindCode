// Problem : Add Two Numbers
// Slug    : https://leetcode.com/problems/add-two-numbers/
// Lang    : c
// Difficulty: Medium
// Runtime : 2 ms
// Memory  : 77 MB
// Synced  : 2026-07-08T05:33:29.061Z
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);          // Dummy head
        ListNode* current = &dummy; // Pointer to build result
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry > 0) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = x + y + carry;

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy.next;
    }
};