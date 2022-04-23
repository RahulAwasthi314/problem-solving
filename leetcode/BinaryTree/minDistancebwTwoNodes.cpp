/**
 * @file minDistancebwTwoNodes.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/minimum-distance-between-bst-nodes/
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

    vector<int> arr;
     void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }

   int bruteforce(TreeNode* root) {
       int ans = INT_MAX;
       inorder(root);       // time: O(n), space: O(n)
       for (int i = 1; i < arr.size(); i++) {
           ans = min(arr[i] - arr[i-1], ans);
       }
       return ans;
   }


public:
    int minDiffInBST(TreeNode* root) {
        return bruteforce(root);
    }
};
