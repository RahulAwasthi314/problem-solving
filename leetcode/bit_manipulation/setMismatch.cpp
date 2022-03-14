/**
 * @file setMismatch.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/set-mismatch/
 * 
 */

class Solution {
    
    vector<int> bf(vector<int>& nums) {
        int n = nums.size()+1;
        int arr[n];
        memset(arr, 0, n*sizeof(int));
        for (int i = 0; i < n-1; i++) {
            arr[nums[i]] += 1;
        }
        int a = -1, b = -1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == 0) a = i;
            if (arr[i] > 1) b = i;
        }
        return {b,a};
        
    }
public:
    vector<int> findErrorNums(vector<int>& nums) {
        return bf(nums);
    }
};