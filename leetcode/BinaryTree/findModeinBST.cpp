/**
 * @file findModeinBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/find-mode-in-binary-search-tree/
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
    map<int, int> fremap;
   void inorder(TreeNode* root) {
       if (!root) return;
       inorder(root->left);
       fremap[root->val]++;
       inorder(root->right);
   }

public:
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        int modeFreq = -1;
        inorder(root);
        for (auto it : fremap) {
            modeFreq = max(modeFreq, it.second);
//            cout << it.first << " " << it.second << "\n";
        }
        for (auto it : fremap) {
            if (it.second == modeFreq) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
