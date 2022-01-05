/**
 * @file validPalindrome.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/valid-palindrome
 */

class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        int size = 0;
        // remove alphanumerics and covert uppercase to lowercase
        for (auto i : s) {
            // upper alpha
            if (i >= 65 and i <= 90) {
                ss += char(i + 32);
                size++;
            }
            // small alpha and digits
            else if ((i >= 97 and i <= 122) or (i >= 48 and i <= 57)) {
                ss += i; size++;
            }
        }
        cout << ss;
        // never put (i + j) < size in condition, causes to address overflow
        for (int i = 0, j = size - 1; i != size / 2; i++, j--) {
            if (ss[i] != ss[j]) return false;
        }
        return true;
    }
};