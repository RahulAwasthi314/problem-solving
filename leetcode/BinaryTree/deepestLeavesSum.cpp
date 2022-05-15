/**
 * @file deepestLeavesSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/deepest-leaves-sum/
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

    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int a = 0, b=0;
        if (root->left) a = maxDepth(root->left);
        if (root->right) b = maxDepth(root->right);
        return 1 + max(a, b);
    }

    void addDeepLeaves(TreeNode* root, int& ans, int depth) {
        if (!root) return;
        if (!root->left and !root->right and depth == 1) ans += root->val;
        if (root->left) addDeepLeaves(root->left, ans, depth-1);
        if (root->right) addDeepLeaves(root->right, ans, depth-1);
    }

public:
    int deepestLeavesSum(TreeNode* root) {
        int depth = maxDepth(root);
        int ans = 0;
        addDeepLeaves(root, ans, depth);
        return ans;

    }
};


class Solution1 {

    pair<int, int> dfs(TreeNode* root) { /* pair {maxDeepestLeaveSum, Max Depth of Leaves} */
        // restrict the root to the deepest valid TreeNode
        if (!root->left and !root->right) return {root->val, 0};

        // defining the required variable
        pair<int, int> leftSubTree, rightSubTree;
        int leftSubDeepestLeavesSum, rightSubDeepestLeavesSum = 0;
        int maxLeftSubTreeDepth = 0, maxRightSubTreeDepth = 0;

        int maxDepth = -1;
        int totalDeepestLeavesSum = 0;

        if (root->left) {
            leftSubTree = dfs(root->left);
            leftSubDeepestLeavesSum = leftSubTree.first;
            maxLeftSubTreeDepth = leftSubTree.second;
        }
        if (root->right) {
            rightSubTree = dfs(root->right);
            rightSubDeepestLeavesSum = rightSubTree.first;
            maxRightSubTreeDepth = rightSubTree.second;
        }


        maxDepth = max(maxLeftSubTreeDepth, maxRightSubTreeDepth);

        if (maxDepth == maxLeftSubTreeDepth) {
            totalDeepestLeavesSum += leftSubDeepestLeavesSum;
        }
        if (maxDepth == maxRightSubTreeDepth) {
            totalDeepestLeavesSum += rightSubDeepestLeavesSum;
        }
        return {totalDeepestLeavesSum, 1 + max(maxLeftSubTreeDepth, maxRightSubTreeDepth)};
    }


public:
    int deepestLeavesSum(TreeNode* root) {
        return dfs(root).first;
    }
};
