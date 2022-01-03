/**
 * @file InvertBinaryTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/invert-binary-tree/
 * 
 */

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

class Solution {

private:
    TreeNode* recursive(TreeNode* root) {
        if (root == nullptr) return root;
        recursive(root->left);
        recursive(root->right);
        TreeNode* ptr = root->left;
        root->left = root->right;
        root->right = ptr;
        return root;
    }

public:
    TreeNode* invertTree(TreeNode* root) {
        return recursive(root);
    }
};