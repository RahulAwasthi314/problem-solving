/**
 * @file combinationSumII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/combination-sum-ii/
 * 
 */

class Solution {
    
    void bt(vector<int>& candidates, int pos, int target, vector<int>& currSol, vector<vector<int>>& allSol) {
        if (target == 0) {
            allSol.push_back(currSol);
            return;
        }
        if (pos == candidates.size()) return;
        if (candidates[pos] > target) return;
        
        int k = 1;
        while (pos+k < candidates.size() and candidates[pos] == candidates[pos+k])  k++;
        bt(candidates, pos+k, target, currSol, allSol);
        currSol.push_back(candidates[pos]);
        bt(candidates, pos+1, target-candidates[pos], currSol, allSol);
        currSol.pop_back();
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> allSol;
        vector<int> currSol;
        sort(candidates.begin(), candidates.end());
        bt(candidates, 0, target, currSol, allSol);
        return allSol;
    }
};