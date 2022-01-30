/**
 * @file rotateArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/rotate-array/
 * 
 */

class Solution {
    // time: O(n) space: O(n) + O(n) = O(n)
    void byUsingSpace(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++) {
            res.push_back(nums[i]);
        }
        for(int i = 0; i < n; i++) {
            nums[(i+k)%n] = res[i];
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        byUsingSpace(nums, k);
    }
};