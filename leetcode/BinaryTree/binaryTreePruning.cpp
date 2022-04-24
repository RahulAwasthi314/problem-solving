/**
 * @file binaryTreePruning.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/binary-tree-pruning/
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
public:
    TreeNode* pruneTree(TreeNode* root) {
            if (!root) return nullptr;
            root->left = pruneTree(root->left);
            root->right = pruneTree(root->right);
            if (root->val == 0 and (root->left or root->right)) return root;
            if (root->val == 0 and (!root->left and !root->right)) return nullptr;
            return root;
    }
};
