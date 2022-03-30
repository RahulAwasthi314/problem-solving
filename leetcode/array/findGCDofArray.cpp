/**
 * @file findGCDofArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/find-greatest-common-divisor-of-array/
 */

class Solution
    int find_GCD(int a, int b) {
        if (b == 0) return a;
        else return find_GCD(b, (a % b));
    }

public:
    int findGCD(vector<int>& nums) {
        int maxx = INT_MIN, minn = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }
        return find_GCD(maxx, minn);

    }
};
