/**
 * @file largestNumTwiceToOther.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 * 
 */

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> fremap;
        for (int i = 0; i < size; i++) fremap[nums[i]] = i;
        if (size == 0) return -1;
        if (size == 1) return 0;
        sort(nums.begin(), nums.end(), greater<int>());
        if (nums[0] >= nums[1]*2) return fremap.find(nums[0])->second;
        return -1;
    }
}