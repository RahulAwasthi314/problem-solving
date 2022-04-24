/**
 * @file addOneRowtoTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/add-one-row-to-tree/
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
            if (!root) return 0;
            if (depth == 1) {
                    TreeNode* r = new TreeNode(val);
                    r->left = root;
                    return r;
            }
            if (depth == 2) {
                    TreeNode* left_t = root->left;
                    TreeNode* right_t = root->right;
                    root->left = new TreeNode(val);
                    root->right = new TreeNode(val);
                    root->left->left = left_t;
                    root->right->right = right_t;
                    return root;
            }
            else {
                    root->left = addOneRow(root->left, val, depth-1);
                    root->right = addOneRow(root->right, val, depth-1);
                    return root;
            }
            return root;
    }
};

/*
[4,2,6,3,1,5]
1
2
[4,2,null,3,1]
1
3
[1,null,2]
1
1
[1]
1
2
[1]
0
1
*/
