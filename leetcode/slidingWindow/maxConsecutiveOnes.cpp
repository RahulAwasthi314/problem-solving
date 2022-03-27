/**
 * @file maxConsecutiveOnes.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/max-consecutive-ones/
 *
 */

 class Solution {
 public:
     int findMaxConsecutiveOnes(vector<int>& nums) {
         int size = nums.size();
         int res = -1, temp = 0;
         for (int i = 0; i < size; i++) {
             if (nums[i] == 1) temp++;
             else {
                 temp = max(temp, res);
                 temp = 0;
             }
             res = max(temp, res);
         }
         return res;
     }
 };
