/**
 * @file powerOfTwo.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/power-of-two/
 * 
 */

class Solution {
    // time: O(log n); space: O(1)
    bool iterative(int n) {
        if (n < 1) return false;
        while (n != 1) {
            if (n % 2 == 1) return false;
            n /= 2;
        }
        return true;
    }

    // recursive
    // time: O(log n); space: O(log n)
    bool recursive(int n) {
        // base step
        if (n == 1) return true;
        // hypothesis step
        if (n % 2 == 1 || n == 0) return false;
        // inductive step
        return recursive(n/2);
    }

    // By maths Log application
    // time: O(1) space: O(1)
    bool logarithmic(int n) {
        if (n < 1) return false;
        return ceil(log2(n)) == floor(log2(n));
    }

    // time: O(1) space: O(1)
    bool bitManipulate(int n) {
        if (n < 1) return false;
        return !(n & (n - 1));
    }

public:
    bool isPowerOfTwo(int n) {
        return bitManipulate(n);
        return logarithmic(n);
        return iterative(n);
        return bitManipulate(n);
    }
};