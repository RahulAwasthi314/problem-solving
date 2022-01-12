/**
 * @file sumRootToLeaf.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
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
private:
    int helper(TreeNode* ptr, int n) {
        // basis step
        // add the current node bit to the int by left shift 
        n = (n << 1) | ptr->val;
        // if current node is leaf
        if (!ptr->left and !ptr->right) {
            // return it to calling function
            return n;
        }
        
        // hypothesis step
        // calculate left and right sum for the particular node 
        int leftsum = 0, rightsum = 0;
        
        if (ptr->left)  leftsum = helper(ptr->left, n);
        if (ptr->right) rightsum = helper(ptr->right, n);
        
        // induction
        // add them and return the sum of both subtrees
        return leftsum + rightsum;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        // as i need to pass the current value of number till now.
        return helper(root, 0);
    }
};