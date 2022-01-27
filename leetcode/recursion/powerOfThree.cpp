/**
 * @file powerOfThree.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/power-of-three/
 * 
 */

class Solution {
    bool iterative(int n) {
        if (n < 1) return false;
        while (n != 1) {
            if (n % 3 != 0) return false;
            n /= 3;
        }
        return true;
    }
public:
    bool isPowerOfThree(int n) {
        return iterative(n);
    }
};