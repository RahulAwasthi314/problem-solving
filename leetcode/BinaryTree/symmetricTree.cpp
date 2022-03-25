/**
 * @file symmetricTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * try out the problem here:
 * https://leetcode.com/problems/symmetric-tree/
 * 
 */

class Solution {
    bool dfs(TreeNode* root1, TreeNode* root2) {
        if (!root1 and !root2) return true;
        if (!root1 or !root2) return false;
        bool a = dfs(root1->left, root2->right);
        if (root1->val != root2->val) return false;
        bool c = dfs(root1->right, root2->left);
        return a and c;
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return dfs(root->left, root->right);
    }
};