/**
 * @file absoluteDiffEqualK.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
 * 
 */

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (i != j and (abs(nums[i] - nums[j]) == k)) count++;
            }
        }
        return count;
    }
};