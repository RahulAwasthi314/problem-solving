/**
 * @file maxProductOfTwoElements.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
 */


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPro = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; i!= j and j < nums.size(); j++) {
                maxPro = max(maxPro, (nums[i]-1) * (nums[j]-1));
            }
        }
        return maxPro;
    }
};
