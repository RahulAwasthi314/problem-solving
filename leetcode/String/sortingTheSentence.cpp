/**
 * @file sortingTheSentence.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/sorting-the-sentence/
 *
 */

 class Solution {
     int count_spaces(string& s) {
         int ans = 0;
         for (char ch : s) {
             if (ch == ' ') ans++;
         }
         return ans+1;
     }

     bool isDigit(char ch) {
         if (ch >= 48 and ch <= 57) {
             return true;
         }
         return false;
     }


 public:
     string sortSentence(string s) {
         vector<string> vec(count_spaces(s));
         int n = s.size();
         for (int i = 0; i < n;) {
             string ss;
             int j = i;
             for (; !isDigit(s[j]); j++) {
                 ss += s[j];
             }
             i = j+2;
             vec[s[j] - '1'] = ss;
         }
         string ans;
         for (string ss : vec) {
             ans += ss;
             ans += " ";
         }
         ans.pop_back();
         return ans;
     }
 };
