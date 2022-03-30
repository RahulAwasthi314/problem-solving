/**
 * @file findHighestAltitude.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 https://leetcode.com/problems/find-the-highest-altitude/
 *
 */


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxx = 0;
        for (int i = 1; i < gain.size(); i++) {
            maxx = max(maxx, gain[i-1]);
            gain[i] += gain[i-1];
        }
        return max(maxx, gain[gain.size()-1]);
    }
};
