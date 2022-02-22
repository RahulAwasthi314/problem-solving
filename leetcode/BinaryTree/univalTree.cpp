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
 *//**
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
    bool isUnivalTree(TreeNode* root) {
        if (!root) return true;
        
        int left = 0;
        bool l = false;
        int right = 0;
        bool r = false;
        if (root->left) {
            if ((root->left->val == root->val) and (isUnivalTree(root->left))) l = true;
            else l = false;
        } else l = true;
        
        if ((root->right)) {
            if ((root->right->val == root->val) and (isUnivalTree(root->right))) r = true;
            else r = false;
        } else r = true;
        return l and r;
    }
};