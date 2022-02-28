/**
 * @file xorSeq.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/xor-se/
 * 
 */

long Xor(long n) {
    long res = n%8;
    if (res == 0 or res == 1) return n;
    else if (res == 2 or res == 3) return 2;
    else if (res == 4 or res == 5) return n+2;
    else return 0;
}

long xorSequence(long l, long r) {
    return Xor(r) ^ Xor(l-1);

}