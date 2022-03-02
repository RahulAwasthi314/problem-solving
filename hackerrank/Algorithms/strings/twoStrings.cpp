/**
 * @file twoStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/two-strings/
 */


int lcs(string& s, string& t, int m, int n) { 
    int dp[m+1][n+1];
    for (int i = 0; i < m+1; i++) dp[i][0] = 0;
    for (int j = 0; j < n+1; j++) dp[0][j] = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i-1] == t[j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}


string twoStrings(string s, string t) {
    if (lcs(s, t, s.size(), t.size()) >= 1) {
        return "YES";
    }
    return "NO";
}
