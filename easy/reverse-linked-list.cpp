// Problem : Reverse Linked List
// Slug    : https://leetcode.com/problems/reverse-linked-list/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-07-08T04:25:22.646Z
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* newHead = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
};