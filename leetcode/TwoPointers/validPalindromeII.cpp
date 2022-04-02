/**
 * @file validPalindromeII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/valid-palindrome-ii/
 *
 */

class Solution {

    bool palin(string& s, int beg, int end) {
        for (int i = beg, j = end; i < j;i++, j--) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                return palin(s, i, j-1) or palin(s, i+1, j);
            }
        }
        return true;
    }
