/**
 * @file leafSimilarTrees.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/leaf-similar-trees/
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
    
    void findLeavesofTree(TreeNode* root, string& s) {
        if (!root) return;
        if (!root->left and !root->right) {
            s += (char)root->val;
        }
        if (root->left) findLeavesofTree(root->left, s);
        if (root->right) findLeavesofTree(root->right, s);
    }
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1, s2;
        findLeavesofTree(root1, s1);
        findLeavesofTree(root2, s2);
        return s1 == s2;
    }
};