/**
 * @file minValueTogetPositiveStepByStepSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
 *
 */

class Solution {
public:
    int minStartValue1(vector<int>& nums) {
        int n = nums.size();
        vector<int> preSum(n);
        preSum[0] = nums[0];
        int ans = nums[0];
        for (int i = 1; i < n; i++) {
            preSum[i] = nums[i] + preSum[i-1];
            ans = min(preSum[i], ans);
        }
        if (ans >= 1) return 1;
        return abs(ans) + 1;
    }

    int minStartValue2(vector<int>& nums) {
        int n = nums.size();
        int minPref = 0;
        int preSum = 0;
        for (int i = 0; i < n; i++) {
            preSum += nums[i];
            minPref = min(minPref, preSum);
        }
        return 1 - minPref;
    }

    int minStartValue3(vector<int>& nums) {
        int n = nums.size();
        int minPref = nums[0];
        int preSum = nums[0];
        for (int i = 1; i < n; i++) {
            preSum += nums[i];
            minPref = min(minPref, preSum);
        }
        return (minPref >= 1) ? 1 : 1 - minPref;
    }
};
