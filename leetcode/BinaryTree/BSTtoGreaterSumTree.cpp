/**
 * @file BSTtoGreaterSumTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
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
    void revInorder(TreeNode* root, int& sum) {
        if (!root) return;
        revInorder(root->right, sum);
        sum += root->val;
        root->val = sum;
        revInorder(root->left, sum);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        revInorder(root, sum);
        return root;
    }
};
