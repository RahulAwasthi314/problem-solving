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