/**
 * @file divideArrayIntoEqualPairs.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/divide-array-into-equal-pairs/
 */

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int arr[501] = {0};
        for (int i = 0; i < nums.size(); i++) {
            arr[nums[i]]++;
        }
        for (int i = 1; i <= 500; i++) {
            if ((arr[i] != 0) and (arr[i]&1)) return false;
        }
        return true;
    }
};
