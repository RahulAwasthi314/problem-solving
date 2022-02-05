/**
 * @file preOrder.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * 
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
    // time: O(n) space: O(n)
    vector<int> iterative(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while (!st.empty()) {
            root = st.top();
            st.pop();
            ans.push_back(root->val);
            if (root->right) st.push(root->right);
            if (root->left) st.push(root->left);
        }
        return ans;
    }


    vector<int> ans;
    vector<int> recursive(TreeNode* root) {
        if (root != nullptr) {
            ans.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return ans;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        return iterative(root);
        return recursive(root);
    }
};