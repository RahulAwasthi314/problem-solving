/**
 * @file nthTribonacciNumber.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/n-th-tribonacci-number/
 * 
 */

class Solution {
    // recursive bruteforce solution.
    int f(int n) {
        if (n <= 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;
        return f(n-1) +f(n-2) + f(n-3);
    }
public:
    int tribonacci(int n) {
        int arr[n+4];
        memset(arr, 0, (n+1)*sizeof(int));
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        for (int i = 3; i <= n; i++) {
            int sum = 0;
            int m = i-1;
            int l = m-2;
            for (; l <= m; l++) {
                sum += arr[l];
            }
            arr[l] = sum;
        }
        return arr[n];
    }
};
/*
0
1
2
3
4
5
6
7
8
9
10
25
15
37
*/