/**
 * @file checkPangramString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 *
 */

 class Solution {
 public:
     bool checkIfPangram(string sentence) {
         int arr[26] = {0};
         for (char ch : sentence) {
             arr[ch-'a'] = 1;
         }
         bool flag = true;
         for (int i = 0; i < 26; i++) {
             if (arr[i] != 1) {
                 flag = false;
             }
         }
         return flag;
     }
 };
