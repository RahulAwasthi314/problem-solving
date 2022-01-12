/**
 * @file insertIntoBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/insert-into-a-binary-search-tree/
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr) {
            TreeNode* ptr = new TreeNode(val);
            return ptr;
        }
        if (root != nullptr) {
            // 
            if (root->val > val) {
                if (root->left) insertIntoBST(root->left, val);
                else root->left = new TreeNode(val);
            }
            else {
                if (root->right) insertIntoBST(root->right, val);
                else root->right = new TreeNode(val);
            }
        }
        return root;
    }
};