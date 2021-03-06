/**
 * @file kthElementOfGrammer.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/k-th-symbol-in-grammar/
 * 
 */

class Solution {
private:

    int kthGrammar2(int n, int k) {
        if (n == 1 and k == 1) return 0;
        
        int length = pow(2, n-1);
        if (k > length/2) return !kthGrammar2(n-1, k-length/2);
        if (k <= length/2) return kthGrammar2(n-1, k);
        return -1;
    }


    int solve(int n, int k) {
        // base step
        // if  n = 1 and k = 1
        // return 0
        if (n == 1 and k == 1) return 0;
        
        // induction step
        // calculate mid of previous row
        int mid = pow(2, n-2);
        
        // hypothesis step
        // if mid >= k
        // previous row, return the value at same column
        if (mid >= k) return solve(n-1, k);
        
        // else if mid < k
        // the previous row i th values complement will be the answer.
        else return !solve(n-1, k-mid);
    }
public:
    int kthGrammar(int n, int k) {
        // hey solve function give me the value of   nTH row and   kTH column
        return solve(n, k);
    }
};