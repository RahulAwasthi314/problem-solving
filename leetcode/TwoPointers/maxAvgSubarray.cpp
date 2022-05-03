/**
 * @file maxAvgSubarray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/maximum-average-subarray-i/
 *
 */


 class Solution1 {

     double calcAvg(int start, int end, vector<int>& nums) {
         double avg = 0;
         int n = 0, sum = 0;
         for (int i = start; i < end; i++) {
             sum += nums[i];
             n++;
         }
         return (double)sum/n;
     }

 public:
     double findMaxAverage(vector<int>& nums, int k) {
         double maxAvg = INT_MIN;
         for (int i = 0, j = i + k; j <= nums.size(); i++, j++) {
             double currAvg = calcAvg(i, j, nums);
             maxAvg = max(maxAvg, currAvg);
         }
         return maxAvg;
     }
 };

 class Solution {

 public:
     double findMaxAverage(vector<int>& nums, int k) {
         int n = nums.size();
         // prefixSum calculation
         // input enhancement
         vector<int> preSum(n);
         preSum[0] = nums[0];
         cout << preSum[0] << " ";
         for (int i = 1; i < n; i++) {
             preSum[i] = preSum[i-1] + nums[i];
             // cout << preSum[i] << " ";
         }
         // cout << endl;

         double maxAvg = INT_MIN;
         for (int i = 0, j = i + k - 1; j < nums.size(); i++, j++) {
             int sum = preSum[j] - ((i == 0) ? 0 : preSum[i-1]);
             // cout << preSum[j] << " " << ((i == 0) ? 0 : preSum[i-1]) << "\n";
             // cout << sum << " ";
             double currAvg = sum / (double)(k);
             maxAvg = max(maxAvg, currAvg);
         }
         return maxAvg;
     }
 };
