/**
 * @file threeConsecutiveOdds.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/three-consecutive-odds/
 *
 */

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        for (int i = 1; i < n-1; i++) {
            if (arr[i-1]%2 && arr[i]%2 && arr[i+1]%2) {
                return true;
            }
        }
        return false;
    }
};
