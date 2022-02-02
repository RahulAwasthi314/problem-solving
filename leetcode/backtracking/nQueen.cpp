/**
 * @file nQueen.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/n-queens/
 * 
 */
class Solution {
    // public vector of possible answers
    vector<vector<string>> ans;
    
    // procedure for intializing the board
    vector<string> initialize_board(int n) {
        vector<string> board;
        for (int i = 0; i < n; i++) {
            string s = "";
            for (int j = 0; j < n; j++) {
                s += ".";
            }
            board.push_back(s);
        }
        return board;
    }
    
    // procedure solve
    void solve(vector<string>& board) {
        // initialize all required components
        unordered_set<int> diag;
        unordered_set<int> anti_diag;
        unordered_set<int> col;
        // make the procedure to place queens
        place_queen(diag, anti_diag, col, 0, board);
        return;
    }
    
    void place_queen(unordered_set<int>& diag, unordered_set<int>& anti_diag, 
                unordered_set<int> col, int row, vector<string>& board) {
        // base case
        if (row == board.size()) {
            // all queens are placed now
            // push the board into answer and return
            ans.push_back(board);
            return;
        }
        
        // hypothesis case
        // calculate the position of queen for the particular row
        for (int column = 0; column < board.size(); column++) {
            // if the current diag, anti_diag and column is not in set 
            // push into the respective sets
            int curr_diag = row - column;
            int curr_anti_diag = row + column;
            
            if (anti_diag.find(curr_anti_diag) != anti_diag.end() or
                    diag.find(curr_diag) != diag.end() or
                    col.find(column) != diag.end()) continue;
            
            // if they are not present in the sets. push them
            // place the queen at current position
            anti_diag.insert(curr_anti_diag);
            diag.insert(curr_diag);
            col.insert(column);
            // place the queen on row and column
            board[row][column] = 'Q';

            // inductive step
            // call your collegue to follow the same step
            place_queen(diag, anti_diag, col, row+1, board);

            // when above procedure done with it
            // remove the elements pushed during current state execution.
            board[row][column] = '.';
            anti_diag.erase(curr_anti_diag);
            diag.erase(curr_diag);
            col.erase(column);
            
        }
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> init_board = initialize_board(n);
        
        // call its subordinate procedure "solve" to solve the problem
        solve(init_board);
        
        return ans;
    }
};