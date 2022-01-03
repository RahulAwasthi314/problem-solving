/**
 * @file XOROperationinanArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/xor-operation-in-an-array/
 * 
 */

class Solution {
public:
    int xorOperation(int n, int start) {
        
        int res = 0;
        int next = start;
        for (int i = 0; i < n; i++) {
            next = start + 2 * i;
            cout << next << " ";
            res ^= next;
        }
        return res;
    }
};