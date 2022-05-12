/**
 * @file jumpGame.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/jump-game/
 *
 */

class Solution1 {

    bool exhaustive(int src, int dest, vector<int>& nums) {
        if (src == dest) return true;

        bool isPathExist = false;
        int loop_invariant = min( (int)(nums.size()-1), src + nums[src]);
        for (int int_node = src+1; int_node <= loop_invariant; int_node++) {
            isPathExist = (exhaustive(int_node, dest, nums) || isPathExist);
        }
        return isPathExist;
    }

    bool exhaustiveWrapper(vector<int>& nums) {
        int n = nums.size()-1;
        int src = 0, dest = n;
        return exhaustive(src, dest, nums);

    }

public:
    bool canJump(vector<int>& nums) {
        return exhaustiveWrapper(nums);
    }
};


class Solution2 {
    /* problem recurrence:
        f (src, dest) -> initial condition  f (0, n-1)
        f (src, dest)  where solve [f (i, dest)     for i in range (src, min(src + nums[src], n-1) + 1) ]
        // base case    f (dest, dest) -> True
    */

    bool tabulationMethod1(vector<int>& nums) {
        int n = nums.size();

        vector<bool> dp(n);
        dp[n-1] = true;

        for (int i = n - 2; i >= 0; i--) {
            // for each node in the graph, find if it connects to dest
            // f (j, d)
            dp[i] = false;
            int lp_inv = min(n - 1, i + nums[i]);
            for (int j = i + 1; j <= lp_inv; j++) {
                if (dp[j]) {
                    dp[i] = true; break;
                }
            }
        }
        return dp[0];
    }

public:
    bool canJump(vector<int>& nums) {
        return tabulationMethod1(nums);
    }
};
