/**
 * @file fibonacciNum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/fibonacci-number/
 * 
 */

class Solution {
    // time: O( ((1 + sqrt(5))/2)^n   +  ((1 - sqrt(5))/2)^n  )
    // T(n) = T(n-1) + T(n-2) + O(1)
    // T(n) = O(1.61^n)
    int fibonacciRecursive(int n) {
        // base step
        if (n == 0 or n == 1)  return n;
        // hypothesis step
        return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
        // inductive step
        // proceeding in hypothesis with n - 1 and n - 2 is the inductive step
    }
    
    // time: O(n) space: O(1)
    int fibIterative(int n) {
        if (n < 2) return n;
        else {
            int t0 = 0;
            int t1 = 1;
            int t2 = t0 + t1;
            for (int i = 1; i < n; i++) {
                t2 = t1 + t0;
                t0 = t1;
                t1 = t2;
            }
        }
        return t2;
    }
public:
    int fib(int n) {
        return fibonacciRecursive(n);
    }
};