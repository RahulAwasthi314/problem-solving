/**
 * @file uniquePaths.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/unique-paths/
 * 
 */

class Solution {
    int recursiveAppraoch(int m, int n) {
        if (n == 1) return 1;
        if (m == 1) return 1;
        return uniquePaths(m, n - 1) + uniquePaths(m - 1, n);
    }

public:
    int uniquePaths(int m, int n) {
        if (n == 1 and m == 1) return 1;
        int dp[m][n];
        for (int i = 0; i < m; i++) {
            dp[i][0] = 1;
        }
        for (int j = 0; j < n; j++) {
            dp[0][j] = 1;
        }
        dp[0][0] = 0;
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        return dp[m-1][n-1];
    }
};

class Solution2 {
    
    // recursive approach to solve the problem  taking exponential time
    // time: O(2^(m+n))    space: O(1)  stack_space: O(m+n)
    int recursive(int m, int n) {
        if (m == 0 or n == 0) return 1;
        return recursive(m, n-1) + recursive(m-1, n);
    }
    
    
    // memoization procedure
    int soln_memoize(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        dp[0][0] = 0;
        return memoize(m-1, n-1, dp);
    }
    int memoize(int m, int n, vector<vector<int>>& dp) {
        if (m == 0 or n == 0) return 1;
        if (dp[m][n] != -1) return dp[m][n];
        return memoize(m-1, n, dp) + memoize(m, n-1, dp);
    }
    

    void printp(int m, int n, vector<vector<int>>& dp) { 
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << dp[i][j] << " ";
            } cout << "\n";
        }
    }
    
    
    // tabular approach  O(m*n)
    int tabular(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        for (int i = 0; i < m; i++) dp[i][0] = 1;
        for (int j = 0; j < n; j++) dp[0][j] = 1;
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        // printp(m, n, dp);
        return dp[m-1][n-1];
    }
    
    
    // tabular appraoch O(2*n)
    
    // tabular appraoch O(n)
    
public:
    int uniquePaths(int m, int n) {
        
        // return recursive(m-1, n-1);
        
        // return soln_memoize(m, n);
        
        return tabular(m, n);
    }
};