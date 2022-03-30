/**
 * @file countEqualAndDivisiblePairsInArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/
 *
 */

class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if ((i != j) and (i*j)%k == 0 and nums[i]==nums[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
