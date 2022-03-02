/**
 * @file maxDepthofTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
    // recursive solution
    int ret_max(TreeNode* root) {
        // base step
        if (!root) return 0;
        // hypothesis step
        // root->left and root->right will give me the heights of their respective subtrees

        // inductive step
        return 1 + max(ret_max(root->left), ret_max(root->right));
    }
public:
    int maxDepth(TreeNode* root) {
        return ret_max(root);
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int left = root->left ? maxDepth(root->left) : 0;
        int right = root->right ? maxDepth(root->right) : 0;
        return 1 + max(left, right);
    }
};