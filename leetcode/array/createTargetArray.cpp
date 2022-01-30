/**
 * @file createTargetArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/create-target-array-in-the-given-order/
 * 
 */

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> ans(n, -1);
        for(int i = 0; i < n; i++) {
            if (ans[index[i]] != -1) {
                for(int j = n-2; j >= index[i]; j--) {
                    ans[j+1] = ans[j];
                }
            }
            ans[index[i]] = nums[i];
        }
        return ans;
    }
};