/**
 * @file missingNumber.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/missing-number/
 * 
 */

class Solution {
    // Time: O(n) Space: O(n)
    int bf(vector<int>& nums) {
        int arr[nums.size()+1];
        memset(arr, 0, (nums.size()+1)*sizeof(int));
        for (int i = 0; i < nums.size(); i++) {
            arr[nums[i]] = 1;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (arr[i] == 0) return i;
        }
        return nums.size();
    }
public:
    int missingNumber(vector<int>& nums) {
        return bf(nums);
    }
};