/**
 * @file twoSumSorted.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 * 
 */

class Solution {
    // two pointer appraoch
    // time: O(n) space: O(1)
    vector<int> twoPtr(vector<int>& nums, int target) {
        for (int i = 0, j = nums.size()-1; i < j;) {
            int n = nums[i] + nums[j];
            if (n < target) i++;
            else if (n > target) j--;
            else return {i+1, j+1};
        }
        return {-1, -1};
    }

    vector<int> find(vector<int>& nums, int a, int b, int target) {
        int sum = nums[a]+nums[b];
        
        if (sum == target) {
            return {a+1, b+1};
        } else if (sum < target) {
            return find(nums, a+1, b, target);
        } else {
            return find(nums, a, b-1, target);
        }
    }
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = numbers.size()-1;
        return find(numbers, i, j, target);
    }
};