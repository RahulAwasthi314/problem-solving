/**
 * @file binaryTreePaths.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> res;
    void allPaths(TreeNode* root, string s) {
        // base step
        if (!root) return;

        // hypothesis step
        s += to_string(root->val) + "->";

        if (!root->left and !root->right) {
            res.push_back(s);
        }
        // inductive step
        allPaths(root->left, s);
        allPaths(root->right, s);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        allPaths(root, s);
        return res;
    }
};


class Solution2 {
    void bt(TreeNode* root, string& currPaths, vector<string>& allPaths) {
        if (!root) {
            return;
        }
        
        if (root and !root->left and !root->right) {
            string ss = to_string(root->val);
            allPaths.push_back(currPaths + ss);
            return;
        }
        string s = currPaths + to_string(root->val) + "->";
        if (root->left) bt(root->left, s, allPaths);
        if (root->right) bt(root->right, s, allPaths);
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> allPaths;
        string currPaths;
        bt(root, currPaths, allPaths);
        return allPaths;
    }
};