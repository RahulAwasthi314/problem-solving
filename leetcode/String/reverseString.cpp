/**
 * @file reverseString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/reverse-string/
 * 
 */

class Solution1 {
public:
    void reverseString(vector<char>& s) {
        int i = 0, j = s.size()-1;
        while (i < j) {
            s[i] ^= s[j] ^= s[i] ^= s[j];
            i++; j--;
        }
    }
};

class Solution2 {
    void rev(vector<char>& s, int i, int j) {
        // base step
        if (i > j) return;
        // induction step
        swap(s[i], s[j]);
        // hypothesis step
        rev(s, ++i, --j);
    }
public:
    void reverseString(vector<char>& s) {
        rev(s, 0, s.size()-1);
    }
};

class Solution3 {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) {
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
        }
    }
};