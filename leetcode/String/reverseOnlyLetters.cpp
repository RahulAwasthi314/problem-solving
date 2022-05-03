/**
 * @file reverseOnlyLetters.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/reverse-only-letters/
 *
 */

class Solution {

    bool isLetter(char ch) {
        if (ch >= 65 and ch <= 90 or
           ch >= 97 and ch <= 122) return true;
        return false;
    }

public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        for (int i = 0, j = n - 1; i < j;) {
            if (isLetter(s[i]) and isLetter(s[j])) {
                swap(s[i], s[j]);
                i++, j--;
            }
            else {
                if (!isLetter(s[i])) i++;
                if (!isLetter(s[j])) j--;
            }
        }
        return s;
    }
};
