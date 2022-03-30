/**
 * @file partitionEqualSubsetSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/partition-equal-subset-sum/
 *
 */

class Solution {
    // backtracking approach
    bool bt(int a, int i, vector<int>& nums) {
        if (a < 0 or i <0) return false;
        if (a == 0) return true;
        return bt(a - nums[i], i-1, nums) or bt(a, i-1, nums);
    }

    bool wrapper_bt(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum&1) return false;
        return bt(sum/2, nums.size()-1, nums);
    }

    // memoize the solution

public:
    bool canPartition(vector<int>& nums) {
        return memoize(nums);
        return wrapper_bt(nums);

    }
};
