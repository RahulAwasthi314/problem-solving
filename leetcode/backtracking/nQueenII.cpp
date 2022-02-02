/**
 * @file nQueenII.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/n-queens-ii/
 * 
 */

class Solution {
    
    int ans = 0;
    
    void solve(unordered_set<int>& diag, unordered_set<int>& anti_diag, unordered_set<int>& column, int row, int n) {
        // base case
        if (row == n) {
            ans += 1;
            return;
        }

        // hypothesis case
        for (int col = 0; col < n; col++) {
            int curr_diag = row - col;
            int curr_anti_diag = row + col;
            
            if (anti_diag.find(curr_anti_diag) != anti_diag.end() or
               diag.find(curr_diag) != diag.end() or
               column.find(col) != column.end()) continue;
            
            anti_diag.insert(curr_anti_diag);
            diag.insert(curr_diag);
            column.insert(col);
            
            // inductive step
            solve(diag, anti_diag, column, row+1, n);
            
            anti_diag.erase(curr_anti_diag);
            diag.erase(curr_diag);
            column.erase(col);
        }
    }
    
    // hey subordinate find states and add one to the ans
    void findStates(int n) {
        unordered_set<int> diag;
        unordered_set<int> anti_diag;
        unordered_set<int> column;
        int row = 0;
        solve(diag, anti_diag, column, row, n);
    }
    
public:
    int totalNQueens(int n) {
        findStates(n);
        return ans;
    }
};