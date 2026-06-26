// Problem : Binary Tree Preorder Traversal
// Slug    : https://leetcode.com/problems/binary-tree-preorder-traversal/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-26T18:56:40.648Z
class Solution {
public:
    vector<int> ans;

    void preorder(TreeNode* root) {
        if (root == nullptr) return;

        ans.push_back(root->val);   // Root
        preorder(root->left);       // Left
        preorder(root->right);      // Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};