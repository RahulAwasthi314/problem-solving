/**
 * @file reverseVowelsOfString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/reverse-vowels-of-a-string/
 *
 */


class Solution {

    bool isVowel(char ch) {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'
           or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U') return true;
        return false;
    }

public:
    string reverseVowels(string s) {
        int n = s.size();
        for (int i = 0, j = n - 1; i < j;) {
            if (isVowel(s[i]) and isVowel(s[j])) {
                swap(s[i], s[j]);
                i++, j--;
            }
            else {
                if (!isVowel(s[i])) i++;
                if (!isVowel(s[j])) j--;
            }
        }
        return s;

    }
};

/*
"hello"
"leetcode"
"hlell"
"aldfk"
"aaeeiioouu"
"a"
"ia"
*/
