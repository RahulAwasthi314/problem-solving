/**
 * @file mergeSortedArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/merge-sorted-array/
 *
 */

 class Solution {

    void bruteforce(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        for (int i = 0; i < m; i++) {
            ans.push_back(nums1[i]);
        }
        for (int j = 0; j < n; j++) {
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(), ans.end());
        nums1 = move(ans);
    }

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        return bruteforce(nums1, m, nums2, n);
    }
};
