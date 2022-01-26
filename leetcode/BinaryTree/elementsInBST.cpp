/**
 * @file elementsInBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
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
    vector<int> res;

    vector<int> bruteForce(TreeNode* root1, TreeNode* root2) {
        // Time Complexity: O(n) + O(m) + O(m+n log m+n)
        pushNodes(root1);
        pushNodes(root2);
        sort(res.begin(), res.end());
        return res;
    }

    // O(n)
    void pushNodes(TreeNode* root) {
        // base case
        if (!root) return;
        // inductive step
        res.push_back(root->val);
        // hypothesis step
        // left and right subtrees will be pushed by the subordinate functions
        pushNodes(root->left);
        pushNodes(root->right);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        // I don't know how to push nodes in the vector so I will transfer this task to the bruteforce function
        return bruteForce(root1, root2);
    }
};