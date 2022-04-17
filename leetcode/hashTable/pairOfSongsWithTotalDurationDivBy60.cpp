/**
 * @file pairOfSongsWithTotalDurationDivBy60.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
 *
 */

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int arr[60] = {0};
        for (int i : time) {
            arr[i%60]++;
        }
        int ans = arr[0] * 1ll * (arr[0] - 1) / 2;
        for (int i = 1; i < 30; i++) {
            ans += arr[i] * arr[60-i];
        }
        ans += arr[30] * 1ll * (arr[30] - 1) / 2;
        return ans;
    }
};
