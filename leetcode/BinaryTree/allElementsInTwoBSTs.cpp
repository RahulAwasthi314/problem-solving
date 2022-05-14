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

    void traverse(TreeNode* root, vector<int>& v) {
        if (!root) return;
        if (root->left) traverse(root->left, v);
        v.push_back(root->val);
        if (root->right) traverse(root->right, v);
    }

    vector<int> bruteforce(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2, ans;
        traverse(root1, v1);
        traverse(root2, v2);

        // two pointer
        int n1 = v1.size(), n2 = v2.size();
        int i = 0, j = 0;
        while ((i < n1) and (j < n2)) {
            if (v1[i] <= v2[j]) {
                ans.push_back(v1[i]);
                i++;
            }
            else {
                ans.push_back(v2[j]);
                j++;
            }
        }
        while (i < n1) {
            ans.push_back(v1[i]);
            i++;
        }
        while (j < n2) {
            ans.push_back(v2[j]);
            j++;
        }
        return ans;
    }

public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        return bruteforce(root1, root2);

    }
};

class Solution2 {
    vector<int> res;
    void pushNodes(TreeNode* root) {
        // base case
        if (!root) return;
        // inductive step
        res.push_back(root->val);
        // hypothesis step
        // left and right subtrees will be pushed by the subordinate functions
        pushNodes(root->left);
        pushNodes(root->right);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        // I don't know how to push nodes in the vector so I will transfer this task to the pushNodes function
        pushNodes(root1);
        pushNodes(root2);
        sort(res.begin(), res.end());
        return res;

    }
};
