// Problem : Delete Node in a Linked List
// Slug    : https://leetcode.com/problems/delete-node-in-a-linked-list/
// Lang    : C++
// Difficulty: Medium
// Synced  : 2026-07-08T05:37:16.985Z
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};