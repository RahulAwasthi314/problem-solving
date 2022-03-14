/**
 * @file findDuplicateNumber.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/find-the-duplicate-number/
 * 
 */


class Solution {
    
    // bruteforce Time: O(n) space: O(n)
    int bf(vector<int>& nums) {
        int n = nums.size()+1;
        int arr[n];
        memset(arr, 0, n*sizeof(int));
        for (int i = 0; i < n-1; i++) {
            arr[nums[i]]++;
        }
        for (int i = 1; i < n; i++) {
            if (arr[i] > 1) return i;
        }
        return n;
    }
    
public:
    int findDuplicate(vector<int>& nums) {
        return bf(nums);
    }
};