/**
 * @file minDepthofTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/minimum-depth-of-binary-tree/
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
    int DFS(TreeNode* root) {
        // base case
        if (!root) return 0;
        if (!root->left and !root->right) return 1;
        
        // hypothesis case
        int leftMin = INT_MAX;
        if (root->left) leftMin = DFS(root->left);
        int rightMin = INT_MAX;
        if (root->right) rightMin = DFS(root->right);
        
        // inductive case
        return 1 + min(leftMin, rightMin);
        
    }
public:
    int minDepth(TreeNode* root) {
        return DFS(root);
    }
};