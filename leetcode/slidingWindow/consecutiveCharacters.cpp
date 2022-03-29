/**
 * @file consecutiveCharacters.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/consecutive-characters/
 *
 */

class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        char ch = s[0];
        int ans = 1;
        int temp = 1;
        for (int i = 1; i < n; i++) {
            if (ch == s[i]) temp++;
            else {
                ch = s[i];
                ans = max(ans, temp);
                temp = 1;
            }
        }
        ans = max(temp, ans);
        return ans;
    }
};
