/**
 * @file jumpGameII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/jump-game-ii/
 *
 */

class Solution {
    // optimization problem

    int memoize(int src, int dest, vector<int>& nums, vector<int>& dp) {
        // if table is filled
        if (dp[src] != INT_MAX) return dp[src];

        // base case
        if (src == dest) return 0;

        // loop invariant
        int minCost = INT_MAX-1;
        int n = nums.size();
        int loop_inv = min(src + nums[src], n-1);
        for (int i = src+1; i <= loop_inv; i++) {
            minCost = min(exhaustive(i, dest, nums), minCost);
        }
        return minCost+1;
    }

    int memoization(vector<int>& nums) {
        vector<int> dp(n, INT_MAX);
        int n = nums.size();
        int src = 0, dest = n-1;
        return memoize(src, dest, nums);
    }

public:
    int jump(vector<int>& nums) {
        return exhaustiveWrapper(nums);
    }
};

class Solution1 {
    // optimization problem

    int exhaustive(int src, int dest, vector<int>& nums) {
        if (src == dest ) return 0;
        int minCost = INT_MAX-1;
        int n = nums.size();
        int loop_inv = min(src + nums[src], n-1);
        for (int i = src+1; i <= loop_inv; i++) {
            minCost = min(exhaustive(i, dest, nums), minCost);
        }
        return minCost+1;
    }

    int exhaustiveWrapper(vector<int>& nums) {
        int n = nums.size();
        int src = 0, dest = n-1;
        return exhaustive(src, dest, nums);
    }

public:
    int jump(vector<int>& nums) {
        return exhaustiveWrapper(nums);
    }
};

class Solution {
    // optimization problem

    int memoize(int src, int dest, vector<int>& nums, vector<int>& dp) {
        // if table is filled
        if (dp[src] != INT_MAX) return dp[src];

        // base case
        if (src == dest) return 0;

        // loop invariant
        int minCost = INT_MAX-1;
        int n = nums.size();
        int loop_inv = min(src + nums[src], n-1);
        for (int i = src+1; i <= loop_inv; i++) {
            minCost = min(memoize(i, dest, nums, dp), minCost);
        }
        return minCost+1;
    }

    int memoization(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, INT_MAX);
        int src = 0, dest = n-1;
        return memoize(src, dest, nums, dp);
    }


    int tabulationMethod(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, INT_MAX);
        dp[n-1] = 0;

        for (int i = n - 2; i >= 0; i--) {
            int loop_inv = min (nums[i] + i, n - 1);
            if (dp[i] == INT_MAX) {
                int minCost = INT_MAX-1;
                for (int j = i + 1; j <= loop_inv; j++) {
                    minCost = min(minCost, dp[j]);
                }
                dp[i] = 1+ minCost;
            }
        }
        return dp[0];
    }

public:
    int jump(vector<int>& nums) {
        return tabulationMethod(nums);
        return memoization(nums);

    }
};
