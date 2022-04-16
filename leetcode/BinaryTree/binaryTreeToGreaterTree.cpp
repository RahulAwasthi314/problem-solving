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
    vector<int> preSum;
    unordered_map<int, int> preSumMap;
    vector<int> inorder(TreeNode* root) {
        if (!root) return arr;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
        return arr;
    }
    
    void placeGreater(TreeNode* root) {
        if (!root) return;
        placeGreater(root->left);
        root->val = preSumMap[root->val];
        placeGreater(root->right);
    }

public:
    TreeNode* convertBST(TreeNode* root) {
        if (!root) return nullptr;
        arr = inorder(root);
        preSum.resize(arr.size(), 0);
        preSum[arr.size() - 1] = arr[arr.size()-1];
        for (int i = arr.size()-2; i >= 0; i--) {
            preSum[i] = preSum[i+1] + arr[i];
        }
        for (int i = 0; i < arr.size(); i++) {
            preSumMap[arr[i]] = preSum[i];
        }
        placeGreater(root);
        return root;
    }
};
