/**
 * @file deleteOpnForTwoStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/delete-operation-for-two-strings/
 * 
 */

class Solution {
    // using lcs to solve the function
    int lcs(string& s1, string& s2) {
        vector<vector<int>> dp (s1.size()+1, vector<int>(s2.size()+1, -1));
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
    
    // recursive solution
    int recursive(int i, int j, string& word1, string& word2) {
        if (j == -1) return i+1;
        if (i == -1) return j+1;
        
        if (word1[i-1] == word2[j-1]) return recursive(i-1, j-1, word1, word2);
        else return 1 + min(recursive(i-1, j, word1, word2), recursive(i, j-1, word1, word2));
    }
    
    // memoization
    int memoize(int i, int j, string& word1, string& word2, vector<vector<int>>& dp) {
        if (i == -1) return j+1;
        if (j == -1) return i+1;
        if (dp[i][j] != -1) return dp[i][j];
        if (word1[i-1] == word2[j-1]) return memoize(i-1, j-1, word1, word2, dp);
        return 1 + min(memoize(i-1, j, word1, word2, dp), memoize(i, j-1, word1, word2, dp));
    }
    
    // tabulation
    int tabulation(string& s1, string& s2) {
        vector<vector<int>> dp(s1.size()+1, vector<int> (s2.size()+1));
        
        for (int i = 0; i <= s1.size(); ++i) dp[i][0] = i;
        for (int j = 0; j <= s2.size(); ++j) dp[0][j] = j;
        
        for (int i = 1; i <= s1.size(); i++) {
            for (int j = 1; j <= s2.size(); j++) {
                if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[s1.size()][s2.size()];
    }
    
    // rolling table method needs to perform
    
    
    
public:
    int minDistance(string word1, string word2) {
        // using lcs method to solve
        // return word1.size() + word2.size() - 2 * lcs(word1, word2);
        
        // recursive code
        // return recursive(word1.size(), word2.size(), word1, word2);
        
        // memoization
        // vector<vector<int>> dp(word1.size()+1, vector<int> (word2.size()+1, -1));
        // return memoize(word1.size(), word2.size(), word1, word2, dp);
        
        return tabulation(word1, word2);
        
    }
};