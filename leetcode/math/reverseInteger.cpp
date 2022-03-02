/**
 * @file reverseInteger.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/reverse-integer/
 * 
 */

class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x != 0) {
            int rem = x % 10;
            x /= 10;
            if ((long)reverse * 10  > INT_MAX or (long)reverse * 10 < INT_MIN) return 0;
            reverse = reverse * 10 + rem;
        }
        return reverse;
    }
};