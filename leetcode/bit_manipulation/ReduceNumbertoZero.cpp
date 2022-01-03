/**
 * @file ReduceNumbertoZero.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero
 * 
 */

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num) {
            if (num & 1) num -= 1;
            else         num >>= 1;
            count++;
        }
        return count;
    }
};