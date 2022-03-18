/**
 * @file findFirstPalindromicString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
 * 
 */

class Solution {
    
    bool isPalindrome(string& s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) 
            if (s[i] != s[j]) return false;
        return true;
    }
    
public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) if(isPalindrome(s)) return s;
        return "";
    }
};