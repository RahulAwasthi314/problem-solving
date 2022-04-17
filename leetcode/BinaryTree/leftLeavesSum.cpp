/**
 * @file leftLeavesSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/sum-of-left-leaves/
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
    int ans = 0;
    void inorder(TreeNode* root, int n) {
        if (!root) return;
        if (root->left) inorder(root->left, 1);
        if (n == 1 and (!root->left and !root->right)) ans += root->val;
        if (root->right) inorder(root->right, 0);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        inorder(root, 0);
        return ans;
    }
};
