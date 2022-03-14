/**
 * @file findAllNumberDisappeared.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 */


class Solution {
    // bruteforce Time: O(n) space: O(n)
    vector<int> bf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size()+1;
        int arr[n];
        memset(arr, 0, n*sizeof(int));
        for (int i = 0; i < n-1; i++) {
            arr[nums[i]]++;
        }
        for (int i = 1; i < n; i++) {
            if (arr[i] == 0) ans.push_back(i);
        }
        return ans;
    }
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        return bf(nums);
    }
};