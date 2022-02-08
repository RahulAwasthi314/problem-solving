/**
 * @file addDigits.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/add-digits/
 * 
 */

class Solution {
public:
    int addDigits(int num) {
        if (num / 10 == 0) return num;
        int sum = 0;
        while(num) {
            sum += num % 10;
            num /= 10;
        }
        return addDigits(sum);
    }
};