/**
 * @file countingBits.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/counting-bits/
 * 
 */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++) {
            int c = 0;
            for (int j = i; j != 0; j >>= 1) {
                if (j & 1) c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};