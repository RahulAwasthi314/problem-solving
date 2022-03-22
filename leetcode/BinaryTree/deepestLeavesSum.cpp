/**
 * @file deepestLeavesSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * try out the problem here:
 * https://leetcode.com/problems/deepest-leaves-sum/
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
    
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int a = 0, b=0;
        if (root->left) a = maxDepth(root->left);
        if (root->right) b = maxDepth(root->right);
        return 1 + max(a, b);
    }
    
    void addDeepLeaves(TreeNode* root, int& ans, int depth) {
        if (!root) return;
        if (!root->left and !root->right and depth == 1) ans += root->val;
        if (root->left) addDeepLeaves(root->left, ans, depth-1);
        if (root->right) addDeepLeaves(root->right, ans, depth-1);
    }
    
public:
    int deepestLeavesSum(TreeNode* root) {
        int depth = maxDepth(root);
        int ans = 0;
        addDeepLeaves(root, ans, depth);
        return ans;
        
    }
};
