/**
 * @file kthSmallestElementInBST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/kth-smallest-element-in-a-bst/
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
    vector<int> inorderTra;
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        inorderTra.push_back(root->val);
        inorder(root->right);
    }
    int bf(TreeNode* root, int k) {
        inorder(root);
        return inorderTra[k-1];
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        return bf(root, k);
    }
};


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
       int kth=1;
       int ans = 0;
        void inorder(TreeNode* root, int k) {
                if (!root) return;
                inorder(root->left, k);
                if (kth == k) ans = root->val;
                kth++;
                inorder(root->right, k);
        }
public:
    int kthSmallest(TreeNode* root, int k) {
             inorder(root, k);
            return ans;

    }
};
