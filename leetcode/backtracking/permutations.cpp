/**
 * @file permutations.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/permutations/
 *
 */


class Solution {
    
    void bt(vector<int>& nums, vector<bool>& available, vector<int>& currSol, vector<vector<int>>& allSol) {
        if (nums.size() == currSol.size()) {
            allSol.push_back(currSol);
            return;
        } 
        for (int i = 0; i < nums.size(); ++i) {
            if (available[i]) {
                currSol.push_back(nums[i]);
                available[i] = false;
                bt(nums, available, currSol, allSol);
                available[i] = true;
                currSol.pop_back();
            }
        }
    }
    vector<vector<int>> wrapper_bt(vector<int>& nums) {
        vector<vector<int>> allSol;
        vector<int> currSol;
        vector<bool> available(nums.size(), true);
        bt(nums, available, currSol, allSol);
        return allSol;
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        return wrapper_bt(nums);
    }
};