/**
 * @file numberWithEvenNumberOfDigits.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 *
 */

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            string s = to_string(nums[i]);
            if (s.size()%2 == 0) count++;
        }
        return count;
    }
};
