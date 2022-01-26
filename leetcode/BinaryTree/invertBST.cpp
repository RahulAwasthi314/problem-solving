/**
 * @file invertBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/invert-binary-tree/
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
private:
    // recursive approach: for a particular node if any of child is present swap the node.
    TreeNode* recursive(TreeNode* root) {
        if (root) {
            if (root->left or root->right) {
                TreeNode* temp = recursive(root->left);
                root->left = recursive(root->right);
                root->right = temp;
                return root;
                
            }
        }
        return root;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        return recursive(root);
    }
};