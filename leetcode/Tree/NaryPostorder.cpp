/**
 * @file NaryPostorder.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/n-ary-tree-postorder-traversal
 *
 */

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


class Solution {
private:
    vector<int> a;
public:
    vector<int> postorder(Node* root) {
        if (!root) return a;
        for (int i = 0; i < (root->children).size(); i++) {
            postorder(root->children[i]);
        }
        a.push_back(root->val);
        return a;
    }
};