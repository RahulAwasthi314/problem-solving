/**
 * @file toLowerCase.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/to-lower-case/
 */

class Solution {
public:
    string toLowerCase(string s) {
        for (auto& ch : s) {
            if (ch >= 65 and ch <= 90) {
                ch = (char)ch + 32;
            }
        }
        return s;
    }
};