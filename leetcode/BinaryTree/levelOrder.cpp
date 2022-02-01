/**
 * @file levelOrder.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    // bruteForce approach
    // time: O(n^2):
        // to get height of tree: O(n) + 
        // to get nodes at one level: O(n) *
        // to get nodes at all levels: O(n)
    // space: O(maxNodesAt any level)
    void getLevelNodes(TreeNode* root, int lev, vector<int>& que) {
        // base step
        if (!root) return;
        // hypothesis step
        if (lev == 1) {
            // insert in the queue
            que.push_back(root->val);
        }
        // inductive step
        getLevelNodes(root->left, lev-1, que);
        getLevelNodes(root->right, lev-1, que);
    }
    // time : O(n)
    int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + height(root->left) + height(root->right);
    }
    // brute force function
    vector<vector<int>> bruteForce(TreeNode* root)  {
        vector<int> que;
        vector<vector<int>> ans;
        int h = height(root);
        for (int i = 1; i <= h; i++) {
            getLevelNodes(root, i, que);
            if (!que.empty()) ans.push_back(que);
            que.clear();
        }
        return ans;
    }
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        return bruteForce(root);
    }
};

// solution for printing values in a single line
// recursive and iterative approach
// time: O(n) and space: O(n)
class Solution2 {
    void lev_order(TreeNode* root, vector<TreeNode*>& que) {
        if (!root) return;
        while(que.size()) {
            TreeNode* temp = *que.begin();
            que.erase(que.begin());
            
            cout << "Node: " << temp->val << "\n";
            // explore its left and right children
            if (temp->left) que.push_back(temp->left);
            if (temp->right) que.push_back(temp->right);
        }
    }
    
    // using O(n) approach
    // queue method
    vector<vector<int>> queueMethodSingleLineRecursive(TreeNode* root) {
        vector<TreeNode*> que;
        que.push_back(root);
        lev_order(root, que);
    }

    void queueMethodSingleLineIterative(TreeNode* root) {
        vector<TreeNode*> queue;
        if (!root) queue.push_back(root);
        else return {{0}};
        while (queue.size()) {
            TreeNode* temp = queue[0];
            queue.erase(queue.begin());
            cout << temp->val << " ";
            if (temp->left) queue.push_back(temp->left);
            if (temp->right) queue.push_back(temp->right);
        }
        return {{}};
    }
public:
    void levelOrder(TreeNode* root) {
        return queueMethodSingleLineIterative(root);
        return queueMethodSingleLineRecursive(root);
    }
};

// standard solution
class Solution3 {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> level;
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};