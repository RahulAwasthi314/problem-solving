/**
 * @file fibTerms.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/fibonacci-number/
 * 
 */

class Solution {
    int fibonacci(int n) {
        // base step
        if (n == 0 or n == 1)  return n;
        // hypothesis step
        return fibonacci(n-1) + fibonacci(n-2);
        // inductive step
        // proceeding in hypothesis with n - 1 and n - 2 is the inductive step
    }
    
    int fibIterative(int n) {
        int t0 = 0;
        int t1 = 1;
        int t2;
        if (n < 2) return n;
        else {
            for (int i = 1; i < n; i++) {
                t2 = t1 + t0;
                t0 = t1;
                t1 = t2;
            }
        }
        return t2;
    }
    
// tabular approach to solve the problem of getting fib terms
    int fibTabular(int n) {
        int dp[n+2];
        memset(dp, 0, (n+1)* sizeof(int));
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
public:
    int fib(int n) {
        return fibTabular(n);
        return fibIterative(n);
        return fibonacci(n);
    }
};