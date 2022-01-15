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
private:
    void inorder(TreeNode* root, vector<int>& s) {
        if(!root) return;
        inorder(root->left, s);
        s.push_back(root->val);
        inorder(root->right, s);
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int> s;
        inorder(root, s);
        int size = s.size();
        for (int i=1; i < size; i++) {
            if (s[i-1] >= s[i]) return false;
        }
        return true;
    }
};