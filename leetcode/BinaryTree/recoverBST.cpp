/**
 * @file recoverBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/recover-binary-search-tree/
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
    vector<int> trav;
    void inorder(TreeNode* root, int& i) {
        if (!root) return;
        inorder(root->left, i);
        if (i == -1)
        trav.push_back(root->val);
        else {
            root->val = trav[i]; i++;
        }
        inorder(root->right, i);
    }
public:
    void recoverTree(TreeNode* root) {
        int i = -1;
        inorder(root, i);
        sort(trav.begin(), trav.end());
        i += 1;
        inorder(root, i);
    }
};
