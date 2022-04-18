/**
 * @file longestConsecutiveSequence.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/longest-consecutive-sequence/
 */

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int curr = 1, ans = 1;
        map<int, int> m;
        for (int i : nums) {
            m[i] = 1;
        }
        int i = m.begin()->first;
        auto it = m.begin();
        it++;
        for (; it != m.end();) {
            if (it->first == i + 1) currit++;
            else curr = 1;
            i = it->first;
            it++;
            ans = max(ans, curr);
        }
        return ans;
    }
};
