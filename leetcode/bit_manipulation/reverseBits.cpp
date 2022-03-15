/**
 * @file reverseBits.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here;
 * https://leetcode.com/problems/reverse-bits/
 * 
 */


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++) {
            int x = 0;
            ans <<= 1;
            x = n & 1;
            ans |= x;
            n >>= 1;
            
        }
        return ans;
    }
};