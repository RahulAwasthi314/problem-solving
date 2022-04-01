/**
 * @file convertSortedArrayToBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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

    TreeNode* f(vector<int>& nums, int start, int end) {
        // calculate mid
        if (start < 0 or end >= nums.size() or start > end) return nullptr;
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = f(nums, start, mid-1);
        root->right = f(nums, mid+1, end);
        return root;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return f(nums, 0, nums.size()-1);

    }
};
