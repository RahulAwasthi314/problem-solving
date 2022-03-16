/**
 * @file combinations.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/combinations/
 * 
 */


class Solution {
    void combine(int i, int n, int k, vector<int>& currSol, vector<vector<int>>& allSol) {
        if (i > n+1) return;
        if (currSol.size() == k) {
            allSol.push_back(currSol);
            return;
        }
        for (int a = i; a <= n+1; a++) {
            currSol.push_back(a);
            combine(a+1, n, k, currSol, allSol);
            currSol.pop_back();
        }
        
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> allSol;
        vector<int> currSol;
        combine(1, n, k, currSol, allSol);
        return allSol;
    }
};