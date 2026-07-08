// Problem : Reverse Linked List
// Slug    : https://leetcode.com/problems/reverse-linked-list/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-07-08T04:06:03.313Z
Node* reverse(Node* head) {
    // Base case
    if (head == NULL || head->next == NULL)
        return head;

    // Reverse the rest of the list
    Node* newHead = reverse(head->next);

    // Reverse the current link
    head->next->next = head;
    head->next = NULL;

    return newHead;
}