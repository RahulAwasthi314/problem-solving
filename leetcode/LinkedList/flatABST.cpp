/**
 * @file flatABST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/flatten-binary-tree-to-linked-list/
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

// void helper(TreeNode* root) {
//         if (!root) return nullptr;
//         TreeNode* leftRoot = flatten(root->left);
//         TreeNode* rightRoot = flatten(root->right);
//         leftRoot->right = rightRoot;
//         root->right = leftRoot;
//     }
class Solution {
private:
    TreeNode* helper(TreeNode* root) {
        if (!root) return nullptr;
        TreeNode* leftRoot = helper(root->left);
        TreeNode* rightRoot = helper(root->right);
        
        TreeNode* temp = leftRoot;
        
        if (temp == nullptr) return root;
        while (temp->right != nullptr) {
            temp = temp->right;
        }
        temp->left = nullptr;
        temp->right = rightRoot;
        // experience from previos question :)
        root->left = nullptr;
        root->right = leftRoot;
        return root;
    }
public:
    void flatten(TreeNode* root) {
        helper(root);
    }
};