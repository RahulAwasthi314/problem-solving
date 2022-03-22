/**
 * @file longestCommonSubsequence.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/longest-common-subsequence/
 * 
 */

class Solution {

    // recursive
    int lcs(int i, int j, string& text1, string& text2) {
        if (i == 0 or j == 0) return 0;
        if (text1[i-1] == text2[j-1]) return 1 + lcs(i-1, j-1, text1, text2);
        else return max(lcs(i-1, j, text1, text2), lcs(i, j-1, text1, text2));
    }

    // bottom up    { memoized code }
    int bottomUpAppraoch(int t1, int t2, string& text1, string& text2, vector<vector<int>>& dp) {
        if (t1 == 0 or t2 == 0) return 0;
        if (dp[t1][t2] != -1)  return dp[t1][t2];
        if (text1[t1-1] == text2[t2-1]) return 1 + bottomUpAppraoch(t1-1, t2-1, text1, text2, dp);
        return max(bottomUpAppraoch(t1-1, t2, text1, text2, dp), bottomUpAppraoch(t1, t2-1, text1, text2, dp));
    }

    // tabulation
    int tabulation(string& s1, string& s2) {
        vector<vector<int>> dp(s1.size()+1, vector<int> (s2.size()+1, -1));
        for (int i = 0; i <= s1.size(); i++) dp[i][0] = 0;
        for (int j = 0; j <= s2.size(); j++) dp[0][j] = 0;
        for (int i = 1; i <= s1.size(); i++) {
            for (int j = 1; j <= s2.size(); j++) {
                if (s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[s1.size()][s2.size()];
    }

    // use rolling hash method to reduce the space usage from O(m*n) -> O(m+n)

public:
    int longestCommonSubsequence(string text1, string text2) {
        // return lcs(text1.size(), text2.size(), text1, text2);
        // vector<vector<int>> dp(text1.size()+1, vector<int>(text2.size()+1, -1));
        // return bottomUpAppraoch(text1.size(), text2.size(), text1, text2, dp);

        return tabulation(text1, text2);
    }
};
