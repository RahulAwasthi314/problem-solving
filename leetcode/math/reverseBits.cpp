/**
 * @file reverseBits.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/reverse-bits/
 * 
 */

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        stringstream ss;
        ss << n;
        string s;
        ss >> s;
        
        for (int i = 0, j = 31; i <= j; i++, j--) {
            char x = s[i];
            s[i] = s[j];
            s[j] = x;
        }
        uint32_t q = stoi(s);
        return q;
    }
};