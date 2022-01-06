/**
 * @file RangeSumofBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/range-sum-of-bst/
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
private:
// brute force approach
    int find_sum(TreeNode* root, int low, int high) {
        if (root != nullptr) {
            int curr_sum = 0;
            if (root->val >= low and root->val <= high) curr_sum = root->val;
            return (curr_sum + find_sum(root->left, low, high) + find_sum(root->right, low, high));
        }
        return 0;
    }

// negating the inferior cases and making the making the left and right subtree NULL after calculating their sum
// learned that we can negate those pointer values that has no use in future.
    int find_sum2(TreeNode* root, int low, int high) {
        if (root == nullptr) return 0;
        int result = 0;
        if (root->val >= low && root->val <= high) result += root->val;
        if (root->val < low) result += find_sum2(root->right, low, high);
        else if (root->val > high) result += find_sum2(root->left, low, high);
        else result += find_sum2(root->left, low, high) + find_sum2(root->right, low, high);
        root->left = root->right = NULL;
        return result;
    }

public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return find_sum(root, low, high);
    }
};