/**
 * @file uncrossedLines.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/uncrossed-lines/
 * 
 */

class Solution {
    int lcs(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();
        int dp[s1+1][s2+1];
        memset(dp, 0, (s1+1)*(s2+1)*sizeof(int));
        for (int i = 1; i < s1+1; i++) {
            for (int j = 1; j < s2+1; j++) {
                if (nums1[i-1] == nums2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        for (int i = 0; i < s1+1; i++) {
            for (int j = 0; j < s2+1; j++) {
                cout << dp[i][j] << " ";
            } cout << endl;
        }
        return dp[s1][s2];
    }
    
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        return lcs(nums1, nums2);
    }
};