/**
 * @file levelSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/
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
public:
    int maxLevelSum(TreeNode* root) {
        int max_ans = INT_MIN;
        int ans = 0;
        int count = 0;
        if (!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            int sum = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                //cout << sum << " " << count << "\n";
            }
            
            count++;
            cout << "\n" << sum << " " << count << "\n";
            if (max_ans != sum) {
                max_ans = max(sum, max_ans);
                if (max_ans == sum) ans = count;
            }
            cout << "\n" << ans << "\n";
        }
        return ans;
    }
};