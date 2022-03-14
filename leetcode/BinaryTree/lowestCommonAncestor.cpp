/**
 * @file lowestCommonAncestor.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
 * 
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    
    TreeNode* lca(TreeNode* root, int a, int b) {
        if (!root) return nullptr;
        if (a <= root->val and  b >= root->val)      return root;
        if (a < root->val  and  b < root->val)       return lca(root->left, a, b);
        if (a > root->val  and  b > root->val)       return lca(root->right, a, b);
        return nullptr;
    }
    
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int a = min (p->val, q->val);
        int b = max (p->val, q->val);
        return lca(root, a, b);
    }
};