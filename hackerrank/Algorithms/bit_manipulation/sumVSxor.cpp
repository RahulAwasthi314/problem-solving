/**
 * @file sumVSxor.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/sum-vs-xor
 */

long sumXor(long n) {
    long count = 0;
    if (n == 0) return 1;
    while (n) {
        if (!(n & 1)) count++;
        n = n >> 1;
    }
    // while (n) {
    //     count += n%2?0:1;
    //     n /= 2;
    // }
    return pow(2, count);
}
