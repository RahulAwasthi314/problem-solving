/**
 * @file permutationsII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/permutations-ii/
 * 
 */

/*
class Solution {
    

TRIED APPRAOCH FOR A SET 
CAN WE USE IT?

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> allSol;
        vector<int> currSol;
        set<int> unique(nums.begin(), nums.end());
        bt(nums, unique, currSol, allSol);
        return allSol;
    }
};

*/ 


class Solution {
    void bt(unordered_map<int, int>& fremap, const int& n, vector<int>& currSol, vector<vector<int>>& allSol) {
        // base case
        if (currSol.size() == n) {
            allSol.push_back(currSol);
            return;
        }
        for (auto& it : fremap) {
            if (it.second > 0) {            /**  ** essence of permutationII question lies here **   **/
                currSol.push_back(it.first);
                it.second--;
                bt(fremap, n, currSol, allSol);
                it.second++;
                currSol.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> currSol;
        vector<vector<int>> allSol;
        unordered_map<int, int> fremap;     // <num, fre>
        for (int i : nums) fremap[i]++;
        bt(fremap, nums.size(), currSol, allSol);
        return allSol;
    }
};