/**
 * @file checkCompletenessOfBinaryTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/check-completeness-of-a-binary-tree/
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
 public:
     bool isCompleteTree(TreeNode* root) {
         queue<TreeNode*> q;
         q.push(root);
         while (!q.empty()) {
             int size = q.size();
             while (size--) {
                 TreeNode* t = nullptr;
                 if (q.front()) {
                     t = q.front(); q.pop();
                 } else {
                     while (!q.empty() and q.front() == nullptr) q.pop();
                     if (q.empty()) return true;
                     if (q.front()) return false;
                 }
                 q.push(t->left);
                 q.push(t->right);
             }
         }
         return true;
     }
 };
