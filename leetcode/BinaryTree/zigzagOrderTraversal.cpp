/**
 * @file zigzagOrderTraversal.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> allSol;
        queue<TreeNode*> q;
        if (!root) return allSol;
        q.push(root);
        int n = 0;
        while (!q.empty()) {
            int size = q.size();
            vector<int> currLevel;
            while (size--) {
                TreeNode* t = q.front();
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
                currLevel.push_back(t->val);
                q.pop();
            }
            if (n%2 == 0) allSol.push_back(currLevel);
            else {
                reverse(currLevel.begin(), currLevel.end());
                allSol.push_back(currLevel);
            }
            n++;
        }
        return allSol;
    }
};
