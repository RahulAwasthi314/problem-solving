/**
 * @file replaceAllDigitsWithChar.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/replace-all-digits-with-characters/
 *
 */

 class Solution {
 public:
     string replaceDigits(string s) {
         for (int i = 0; i < s.size(); i+=2) {
             s[i+1] = s[i]+(s[i+1]-'0');
         }
         return s;

     }
 };
