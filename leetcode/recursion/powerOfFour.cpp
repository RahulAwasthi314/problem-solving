/**
 * @file powerOfFour.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/power-of-four/
 * 
 */

class Solution {
    // time: O(1) space: O(1)
    bool isPowerOfTwo(int n) {
        if (n < 1) return false;
        return !(n & (n-1));
    }
    // time: O(1) space: O(1)
    int countPowerOfTwo(int n) {
        return log2(n);
    }
public:
    bool isPowerOfFour(int n) {
        if (isPowerOfTwo(n) and countPowerOfTwo(n) % 2 == 0) {
            return true;
        }
        return false;
    }
};