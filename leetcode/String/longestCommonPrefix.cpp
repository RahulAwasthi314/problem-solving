/**
 * @file longestCommonPrefix.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/longest-common-prefix/
 *
 */
class Solution {
    string bruteforce(vector<string>& strs) {
        string ans;
        for (int i = 0; i < strs[0].size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j-1][i] != strs[j][i]) return ans;
            }
            ans += strs[0][i];
        }
        return ans;

    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        return bruteforce(strs);
    }
};
