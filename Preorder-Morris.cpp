/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*
 * 🌲 Morris Preorder Traversal
 * This approach traverses the tree in preorder (Root → Left → Right)
 * without using recursion or a stack, and in O(1) space.
 * It temporarily modifies the tree using threaded binary tree logic.
 */

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode* temp = nullptr;
        vector<int> ans;

        while (root) {
            if (root->left) {
                // 🔍 Find the rightmost node in left subtree (predecessor)
                temp = root->left;
                while (temp->right && temp->right != root) {
                    temp = temp->right;
                }

                if (temp->right == nullptr) {
                    // 📝 Visit current before threading for preorder
                    ans.push_back(root->val);
                    // 🔗 Thread right of predecessor to current root
                    temp->right = root;
                    root = root->left;
                } else {
                    // 🔁 Thread already exists — remove and move right
                    temp->right = nullptr;
                    root = root->right;
                }
            } else {
                // ✅ No left child — visit and move right
                ans.push_back(root->val);
                root = root->right;
            }
        }

        return ans;
    }
};
