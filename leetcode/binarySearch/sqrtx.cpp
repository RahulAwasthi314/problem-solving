/**
 * @file sqrtx.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/sqrtx/
 */

class Solution {
public:
    int mySqrt(int x) {
        int start = 0, end = x;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid * 1ll * mid < x) {
                start = mid +1;
            } else if (mid * 1ll * mid == x) {
                return mid;
            } else {
                end = mid - 1;
            }
        }
        return start-1;
    }
};
