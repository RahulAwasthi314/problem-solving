/**
 * @file subarraySizeKhavingAvgGreaterThanThreshold.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
 *
 */

class Solution {

public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int n = nums.size();
        // prefixSum calculation
        // input enhancement
        vector<int> preSum(n);
        preSum[0] = nums[0];
        // cout << preSum[0] << " ";
        for (int i = 1; i < n; i++) {
            preSum[i] = preSum[i-1] + nums[i];
        }

        int specialSubarrays = 0;

        double maxAvg = INT_MIN;
        for (int i = 0, j = i + k - 1; j < nums.size(); i++, j++) {
            int sum = preSum[j] - ((i == 0) ? 0 : preSum[i-1]);
            double currAvg = sum / (double)(k);
            if (currAvg >= threshold) {
                specialSubarrays++;
            }
        }
        return specialSubarrays;
    }
};
