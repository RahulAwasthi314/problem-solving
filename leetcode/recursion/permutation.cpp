/**
 * @file permutation.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/permutations/
 * 
 */

class Solution {
vector<vector<int>> res;
private:
    void subordinate(vector<int>& nums, int pos) {
        // base step
        if (pos == nums.size()-1) {
            // for (auto i : nums) cout << i << " ";
            // cout << endl;
            res.push_back(nums);
            return;
        }
        
        // inductive step
        for (int i = pos; i < nums.size(); i++) {
            swap(nums[i], nums[pos]);
            // hypothesis step
            subordinate(nums, pos+1);
            swap(nums[i], nums[pos]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // ask for your subordinate for the answer
        // hey, subordinate! I am giving the container give me the result after stroing in it.
        subordinate(nums, 0);
        return res;
    }
};