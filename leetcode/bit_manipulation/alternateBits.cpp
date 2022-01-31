/**
 * @file alternateBits.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/binary-number-with-alternating-bits/
 * 
 */

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int i = 0;
        while (n) {
            i = (n & 1);
            n >>= 1;
            if (!(i ^ (n&1))) return false;
        }
        return true;
    }
};