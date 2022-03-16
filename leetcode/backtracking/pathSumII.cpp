/**
 * @file pathSumII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/path-sum-ii/
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
    void bt(TreeNode* root, vector<int>& currSum, vector<vector<int>>& allSum, int target) {
        if (!root) return;
        if (root) {
            currSum.push_back(root->val);
            if (!root->left and !root->right and target == root->val) {
                allSum.push_back(currSum);
                currSum.pop_back();
                return;
            }
            bt(root->left, currSum, allSum, target-root->val);
            bt(root->right, currSum, allSum, target-root->val);
            currSum.pop_back();
        }
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> currSum;
        vector<vector<int>> allSum;
        if (!root) return allSum;
        bt(root, currSum, allSum, targetSum);
        return allSum;
    }
};