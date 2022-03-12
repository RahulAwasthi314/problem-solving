/**
 * @file addStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/add-strings/
 * 
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     string addStrings(string num1, string num2) {
        string s = "";
        int s1 = num1.size()-1;
        int s2 = num2.size()-1;
        int carry = 0;
        while ((s1>= 0 and s2 >= 0) or carry) {
            int n = carry;
            if (s1 >= 0) n += (num1[s1] - '0');
            if (s2 >= 0) n += (num2[s2] - '0');
            carry = n/10;
            n %= 10;
            s = to_string(n) + s;
            s1--; s2--;
        }
        while (s1>=0 or carry) {
            int n = (num1[s1] - '0') + carry;
            carry = n/10;
            n %= 10;
            s = to_string(n) + s;
            s1--;
        }
        while (s2>=0 or carry) {
            int n = (num2[s2] - '0') + carry;
            carry = n/10;
            n %= 10;
            s = to_string(n) + s;
            s2--;
        }
        return s;
    }
};

/**
"11"
"123"

"456"
"77"

"0"
"0"

"9033"
"0"

*/