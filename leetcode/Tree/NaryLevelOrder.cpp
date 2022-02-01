/**
 * @file NaryLevelOrder.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/n-ary-tree-level-order-traversal/
 * 
 */

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                Node* temp = q.front();
                q.pop();
                for (int j = 0; j < (temp->children).size(); j++) {
                    q.push(temp->children[j]);
                }
                level.push_back(temp->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};