/**
 * @file combinationSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/combination-sum/
 * 
 */

class Solution {
    void findpossibleSum(int pos, vector<int>& selectedCand, vector<int>& candidates, int target, vector<vector<int>>& possibleComb) {
        
        if (target == 0) {
            possibleComb.push_back(selectedCand);
            return;
        }
        for (int i = pos; i < candidates.size(); i++) {
            if (candidates[i] > target) {
                break;
            }
            selectedCand.push_back(candidates[i]);
            findpossibleSum(i, selectedCand, candidates, target - candidates[i], possibleComb);
            selectedCand.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> possibleComb;
        vector<int> selectedCand;
        sort(candidates.begin(), candidates.end());
        findpossibleSum(0, selectedCand, candidates, target, possibleComb);
        return possibleComb;
    }
};


class MySolution {
    
    void bt(vector<int>& candidates, int pos, int target, vector<int>& currSol, vector<vector<int>>& allSol) {
        // base case
        if (target == 0) {
            allSol.push_back(currSol);
        }
        if (pos == candidates.size())return;
        if (candidates[pos] > target) return;
        
        // without 2
        currSol.push_back(candidates[pos]);
        bt(candidates, pos, target-candidates[pos], currSol, allSol);
        currSol.pop_back();
        bt(candidates, pos+1, target, currSol, allSol);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> allSol;
        vector<int> currSol;
        bt(candidates, 0, target, currSol, allSol);
        return allSol;
    }
};