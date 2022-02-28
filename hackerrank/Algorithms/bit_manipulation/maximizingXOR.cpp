/**
 * @file maximizingXOR.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/maximizing-xor
 *
 */

int maximizingXor(int l, int r) {
    int maxx = 0;
    for (int i = l; i <= r; i++) {
        for (int j = i; j <= r; j++) {
            maxx = max(maxx, i ^ j);
        }
    }
    return maxx;
}
