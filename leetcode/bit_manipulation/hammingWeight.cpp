/**
 * @file hammingWeight.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/number-of-1-bits/
 * 
 */

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i = 1; i <= 32; i++) {
            if (n & 1) count++;
            n >>= 1;
        }
        return count;
    }
};