/**
 * @file isSubsequence.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/is-subsequence/
 * 
 */

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() > t.size()) return false;
        int i = 0, j = 0;
        for (; i != s.size();) {
            if (j == t.size()) return false;
            if (s[i] == t[j]) {
                i++; j++;
            }
            else {
                j++;
            }
        }
        if (i == s.size()) {
            return true;
        }
        return false;
    }
};
