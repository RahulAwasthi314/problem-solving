/**
 * @file subtractProductBySum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 * 
 */

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        vector<int> a;
        while (n) {
            int x = n % 10;
            n /= 10;
            sum += x;
            prod *= x;
        }
        return prod-sum;
    }
};