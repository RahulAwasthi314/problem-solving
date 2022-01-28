/**
 * @file sumVsXOR.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:-
 * https://www.hackerrank.com/contests/infytq-jan27-cs3c/challenges/sum-vs-xor
 * 
 */

long sumXor(long n) {
    long count = 0;
    if (n == 0) return 1;
    while (n) {
        if (!(n & 1)) count++;
        n = n >> 1;
    }
    return pow(2, count);
}

// optimised code

    // while (n) {
    //     count += n%2?0:1;
    //     n /= 2;
    // }