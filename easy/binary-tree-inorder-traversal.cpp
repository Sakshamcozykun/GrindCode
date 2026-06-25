// Problem : Binary Tree Inorder Traversal
// Slug    : https://leetcode.com/problems/binary-tree-inorder-traversal/
// Lang    : C++
// Difficulty: Easy
// Synced  : 2026-06-25T17:25:35.817Z
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        TreeNode* curr = root;
        TreeNode* pre;

        while (curr != nullptr) {
            if (curr->left == nullptr) {
                result.push_back(curr->val);
                curr = curr->right;
            } else {
                pre = curr->left;
                
                while (pre->right != nullptr) {
                    pre = pre->right;
                }
                
                pre->right = curr;
                TreeNode* temp = curr;
                curr = curr->left;
                temp->left = nullptr;
            }
        }

        return result;
    }
};