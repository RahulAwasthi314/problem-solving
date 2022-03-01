/**
 * @file isPalindrome.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/palindrome-number/
 * 
 */

class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        string s;
        ss >> s;
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s2 == s;
        
    }
};