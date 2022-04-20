/**
 * @file numberOfIsland.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/number-of-islands/
 *
 */



class Solution {
    void bfs(int i, int j, int m, int n, vector<vector<char>>& grid) {
        if (i < 0 or j < 0 or i >= m or j >= n or grid[i][j] == '0') return;
        if (grid[i][j] == '1') {
            grid[i][j] = '0';
        }
        bfs(i-1, j, m, n, grid);
        bfs(i+1, j, m, n, grid);
        bfs(i, j-1, m, n, grid);
        bfs(i, j+1, m, n, grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0, m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                  bfs(i, j, m, n, grid);
                  ans++;
                }
            }
        }
        return ans;
    }
};
