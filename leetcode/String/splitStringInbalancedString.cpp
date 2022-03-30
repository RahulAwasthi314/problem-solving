/**
 * @file splitStringInBalancedStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/split-a-string-in-balanced-strings/
 *
 */

 class Solution {
 public:
     int balancedStringSplit(string s) {
         int ans = 0;
         int r_cnt = 0, l_cnt = 0;
         for (char ch : s) {
             if (ch == 'R') {
                 r_cnt++;
             }
             if (ch == 'L') {
                 l_cnt++;
             }
             if (r_cnt == l_cnt) {
                 ans++;
                 l_cnt = 0; r_cnt = 0;
             }
         }
         return ans;
     }
 };
