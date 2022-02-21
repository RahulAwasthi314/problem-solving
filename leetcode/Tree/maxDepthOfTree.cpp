/**
 * @file maxDepthOfTree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
 * 
 */

class Solution {
    int maxDep(Node* root) {
        if (root == nullptr) return 0;
        
        vector<int> depth;
        for (auto i : root->children) {
            depth.push_back(maxDep(i));
        }
        int maxx = 0;     
        for (auto i : depth) maxx = max(maxx, i);
        return 1 + maxx;
    }
public:
    int maxDepth(Node* root) {
        return maxDep(root);
        
    }
};