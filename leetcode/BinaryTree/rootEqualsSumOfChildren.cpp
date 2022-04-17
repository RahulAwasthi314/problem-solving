/**
 * @file rootEqualsSumOfChildren.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/root-equals-sum-of-children/
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

    pair<bool, int> subTreeSum(TreeNode* root) {
        if (!root) return {true, 0};
        int ans = 0;
        if (root->left) ans += subTreeSum(root->left).second;
        if (root->right) ans += subTreeSum(root->right).second;
        if (ans == root->val) return {true, root->val};
        if (ans == 0 and !root->left and !root->right)  return {true, root->val};
        return {false, root->val};
    }

public:
    bool checkTree(TreeNode* root) {
        return subTreeSum(root).first;
    }
};
