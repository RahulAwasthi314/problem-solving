/**
 * @file containsDuplicate.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/sort-array-by-parity/
 *
 */

 class Solution {
     // time: O(n) space: O(1)
     vector<int> bf(vector<int>&nums) {
         vector<int> ans;
         int size = nums.size();
         for (int i = 0; i < size; i++) {
             if (nums[i]%2 == 0) {
                 ans.push_back(nums[i]);
             }
         }
         for (int i = 0; i < size; i++) {
             if (nums[i]%2) {
                 ans.push_back(nums[i]);
             }
         }
         return ans;
     }
 public:
     vector<int> sortArrayByParity(vector<int>& nums) {
         return bf(nums);
     }
 };
