/**
 * @file MergeTwoBinaryTrees.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/merge-two-binary-trees/
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root = nullptr;
        if (root1 == nullptr and root2 ==nullptr) {
            return root;
        }
        
        if (root1 == nullptr and root2 != nullptr) {
            root = new TreeNode(root2->val);
            root->left = mergeTrees(nullptr, root2->left);
            root->right = mergeTrees(nullptr, root2->right);
            
        }
        if (root1 != nullptr and root2 == nullptr) {
            root = new TreeNode(root1->val);
            root->left = mergeTrees(root1->left, nullptr);
            root->right = mergeTrees(root1->right, nullptr);
        }
        if (root1 != nullptr and root2 != nullptr) {
            root = new TreeNode(root1->val + root2->val);
            root->left = mergeTrees(root1->left, root2->left);
            root->right = mergeTrees(root1->right, root2->right);
        }
        return root;
    }
};

// reduced approach
class Solution2 {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root = nullptr;
        if (root1 == nullptr and root2 == nullptr) return root;
        if (root1 == nullptr and root2 != nullptr) return root2;
        if (root1 != nullptr and root2 == nullptr) return root1;
        root = new TreeNode(root1->val + root2->val);
        root->left = mergeTrees(root1->left, root2->left);
        root->right = mergeTrees(root1->right, root2->right);
        return root;
    }
};