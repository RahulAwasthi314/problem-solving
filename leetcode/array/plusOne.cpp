/**
 * @file plusOne.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/plus-one/
 * 
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num = 1;
        for (int i = digits.size()-1; i >= 0; i--) {
            digits[i] = digits[i] + num;
            num = digits[i] / 10;
            if (digits[i] > 9) digits[i] %= 10;
        }
        if (num == 1) digits.insert(digits.begin(), num);
        return digits;
    }
};