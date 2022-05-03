/**
 * @file completeBinaryTreeInserter.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/complete-binary-tree-inserter/
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
class CBTInserter {
    TreeNode* root;
public:
    CBTInserter(TreeNode* r) {
        root = r;
    }

    int insert(int val) {
        int parentVal = -1;
        queue<TreeNode*> q;

        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                TreeNode* t = q.front(); q.pop();
                if (t->left) q.push(t->left);
                else {
                    t->left = new TreeNode(val);
                    return t->val;
                }
                if (t->right) q.push(t->right);
                else {
                    t->right = new TreeNode(val);
                    return t->val;
                }
            }
        }
        return parentVal;

    }

    TreeNode* get_root() {
        return root;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */
