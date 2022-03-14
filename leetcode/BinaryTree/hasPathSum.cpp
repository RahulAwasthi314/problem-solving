/**
 * @file hasPathSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/path-sum/
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        // base case
        if (!root) return false;
        targetSum -= root->val;
        if (targetSum == 0 and (!root->left and !root->right)) return true;
        
        bool a = false, b = false;
        // hypothesis step
        if (root->left) a = hasPathSum(root->left, targetSum);
        if (root->right) b = hasPathSum(root->right, targetSum);
        // inductive step
        return (a or b);
        
    }
};