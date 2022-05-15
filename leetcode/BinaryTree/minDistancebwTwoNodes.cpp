/**
 * @file minDistancebwTwoNodes.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/minimum-distance-between-bst-nodes/
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

    vector<int> arr;
     void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }

   int bruteforce(TreeNode* root) {
       int ans = INT_MAX;
       inorder(root);       // time: O(n), space: O(n)
       for (int i = 1; i < arr.size(); i++) {
           ans = min(arr[i] - arr[i-1], ans);
       }
       return ans;
   }


public:
    int minDiffInBST(TreeNode* root) {
        return bruteforce(root);
    }
};


class Solution {
    int ans = INT_MAX;
    int cnt = 0;
    int prevInorder = 0;
     void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);

        if (cnt != 0) {
            ans = min(ans, root->val - prevInorder);
        }
         prevInorder = root->val;
         ++cnt;
        inorder(root->right);
    }

public:
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
/*
[4,2,6,1,3]
[1,0,48,null,null,12,49]
[15,10,18,8,14]
[15,10,18,8,13,16]
[1,null,2]
[3,null,4]
[0,null,1]
[2,1,null]
*/
