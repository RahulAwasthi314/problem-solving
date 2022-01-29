/**
 * @file sumRootToLeafInt.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/sum-root-to-leaf-numbers/
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
    vector<long> res;
    
    void findNums(TreeNode* root, long num) {
        if (!root) return;
        if (!root->left and !root->right) {
            num = num * 10 + root->val;
            res.push_back(num);
        }
        num = num * 10 + root->val;
        
        findNums(root->left, num);
        findNums(root->right, num);
    }

public:
    int sumNumbers(TreeNode* root) {
        long num = 0;
        findNums(root, num);
        return accumulate(res.begin(), res.end(), 0);
    }
};