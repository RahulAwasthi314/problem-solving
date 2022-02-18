/**
 * @file allSubsetsXORTotal.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/sum-of-all-subset-xor-totals/
 * 
 */

class Solution {
    
    void backtrack(int pos, vector<int>& nums, int& currXOR, int& totalXOR) {
        if (pos == nums.size()) {
            totalXOR += currXOR;
            return;
        }
        currXOR ^= nums[pos];
        backtrack(pos+1, nums, currXOR, totalXOR);
        currXOR ^= nums[pos];
        backtrack(pos+1, nums, currXOR, totalXOR);
    }
    
public:
    int subsetXORSum(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int totalXOR = 0;
        int currXOR = 0;
        backtrack(0, nums, currXOR, totalXOR);
        return totalXOR;
    }
};