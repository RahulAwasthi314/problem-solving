/**
 * @file reverseWordsInStringIII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/reverse-words-in-a-string-iii/
 * 
 */

class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.size();) {
            int a = i;
            int b = i;
            while ((b < s.size()) and ((s[b]) != 32)) b++;
            b--;
            cout << a << " " << b << endl;
            if (b == s.size()) break;
            int t = b;
            while (a < b) {
                s[a] ^= s[b] ^= s[a] ^= s[b];
                a++; b--;
            }
            b++;i = t+2;   
        }
        return s;
    }
};