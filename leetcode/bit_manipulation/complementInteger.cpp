/**
 * @file complementInteger.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/complement-of-base-10-integer/
 * 
 */

#include <stack>
#include <iostream>
using namespace std;
int bitwiseComplement(int n){
    int res = 0;
    stack<int> a;
    
    if (n == 0) return 1;

    while (n) {
        a.push((n & 1) ^ 1);
        n >>= 1;
    }
    int size = a.size();
    for (int i = 0; i < size; i++) {
        res <<= 1;
        res |= a.top();
        a.pop();
    }
    return res;

}
int main() {
    int n = bitwiseComplement(0);
    cout << n;
    return 0;

}