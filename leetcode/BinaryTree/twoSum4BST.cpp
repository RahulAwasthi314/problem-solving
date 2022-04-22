/**
 * @file twoSum4BST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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

    // naive solution
    // time : O(n) + O(n) space: O(n)

    void inorderTraverse(TreeNode* root, vector<int>& a) {
        if (!root) return;
        inorderTraverse(root->left, a);
        a.push_back(root->val);
        inorderTraverse(root->right, a);
    }

    // time: O(n) approach
    bool findPair(vector<int>& arr, int target) {
        int n = arr.size();
        for (int i = 0, j = n-1; i < j;) {
            if (arr[i] + arr[j] == target) return true;
            else if (arr[i] + arr[j] < target) i++;
            else j--;
        }
        return false;
    }

public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        inorderTraverse(root, inorder);
        return findPair(inorder, k);
    }
};
