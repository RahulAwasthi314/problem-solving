/**
 * @file binaryTreePaths.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> res;
    void allPaths(TreeNode* root, string s) {
        // base step
        if (!root) return;

        // hypothesis step
        s += to_string(root->val) + "->";

        if (!root->left and !root->right) {
            res.push_back(s);
        }
        // inductive step
        allPaths(root->left, s);
        allPaths(root->right, s);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        allPaths(root, s);
        return res;
    }
};