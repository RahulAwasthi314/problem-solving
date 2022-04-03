/**
 * @file nextPermutation.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/next-permutation/
 *
 */

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        while (i >= 0 and nums[i] >= nums[i+1]) --i;
        int j = n-1;
        if (i == -1) j = 0;
        else {
            while (nums[j] <= nums[i]) --j;
            swap(nums[i], nums[j]);
        }
        // reverse(i+1, n-1);
        int a = i+1, b = n-1;
        while (a < b) {
            swap(nums[a], nums[b]);
            ++a; --b;
        }
    }
};
