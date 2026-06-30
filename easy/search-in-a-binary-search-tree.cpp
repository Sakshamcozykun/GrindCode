// Problem : Search in a Binary Search Tree
// Slug    : https://leetcode.com/problems/search-in-a-binary-search-tree/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-30T03:55:11.407Z
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root) {
            if (root->val == val) return root;
            if (val < root->val)
                root = root->left;
            else
                root = root->right;
        }
        return nullptr;
    }
};