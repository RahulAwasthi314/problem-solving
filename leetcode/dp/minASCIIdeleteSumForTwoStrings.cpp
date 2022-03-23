/**
 * @file minASCIIdeleteSumForTwoStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/
 * 
 */

class Solution {
    
    int ret_sum(int a, string& s) {
        if (a < 0) return 0;
        int sum = 0;
        for (int i = 0; i <= a; i++) {
            sum += s[i];
        }
        return sum;
    }
    
    // recursive solution
    int recursive(int a, int b, string& s1, string& s2) {
        if (a < 0) return ret_sum(b, s2);
        if (b < 0) return ret_sum(a, s1);
        if (s1.at(a) == s2.at(b)) return recursive(a-1, b-1, s1, s2);
        return min(s1.at(a) + recursive(a-1, b, s1, s2), s2.at(b) + recursive(a, b-1, s1, s2));
    }
    
    int memoize(int a, int b, string& s1, string& s2, vector<vector<int>>& dp) {
        if (a < 0) return ret_sum(b, s2);
        if (b < 0) return ret_sum(a, s1);
        if (dp[a][b] != -1) return dp[a][b];
        if (s1.at(a) == s2.at(b)) return memoize(a-1, b-1, s1, s2, dp);
        return min(s1.at(a) + memoize(a-1, b, s1, s2, dp), s2.at(b) +  memoize(a, b-1, s1, s2, dp));
    }
    
    // tabulation
    int tabulation(string& s1, string& s2) {
         vector<vector<int>> dp(s1.size()+1, vector<int> (s2.size()+1, -1));
        dp[0][0] = 0;
        for (int i = 1; i <= s2.size(); i++) {
            dp[0][i] = s2[i-1] + dp[0][i-1];
        }
         for (int i = 1; i <= s1.size(); i++) {
            dp[i][0] = s1[i-1] + dp[i-1][0];
        }
        for (int i = 1; i <= s1.size(); i++) {
            for (int j = 1; j <= s2.size(); j++) {
                if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = min(s1.at(i-1) + dp[i-1][j], s2.at(j-1) + dp[i][j-1]);
            }
        }
        // for (int i = 0; i <= s1.size(); i++) {
        //     for (int j = 0; j <= s2.size(); j++) {
        //        cout << dp[i][j] << " ";
        //     } cout << endl;
        // }
        return dp[s1.size()][s2.size()];
    }
    
public:
    int minimumDeleteSum(string s1, string s2) {
        // return recursive(s1.size()-1, s2.size()-1, s1, s2);
        
        // vector<vector<int>> dp(s1.size()+1, vector<int> (s2.size()+1, -1));
        // return memoize(s1.size()-1, s2.size()-1, s1, s2, dp);
        
        return tabulation(s1, s2);
        
    }
};