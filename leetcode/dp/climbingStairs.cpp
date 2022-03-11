/**
 * @file climbingStairs.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/climbing-stairs/
 * 
 */

class Solution {
// tail recursive method to solve the problem    
    void bt(int n, int& sum) {
        if (n == 0) {
            sum += 1;
            return;
        }
        if (n < 0) {
            return;
        }
        bt(n-1, sum);
        bt(n-2, sum);
    }
    int tailRecursion(int n) {
        int sum = 0;
        bt(n, sum);
        return sum;
    }
    
// head recursive way
    int bt2(int n) {
        if (n == 0) return 1;
        if (n < 0) return 0;
        int s = bt2(n-1) + bt2(n-2);
        return s;
    }
    
    int headRecursion(int n) {
        return bt2(n);
    }
    
// tabular method to solve the problem 
    int tabular(int n) {
        int arr[n+1];
        memset(arr, 0, (n+1)*sizeof(int));
        arr[0] = 1;
        arr[1] = 1;
        for (int i = 2; i <= n; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
    
public:
    int climbStairs(int n) {
        return tabular(n);
        return headRecursion(n);
        return tailRecursion(n);
    }
};