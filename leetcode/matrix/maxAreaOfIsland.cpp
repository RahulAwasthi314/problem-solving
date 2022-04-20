/**
 * @file maxAreaOfIsland.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/max-area-of-island/
 *
 */


class Solution {

    void bfs(int i, int j, int m, int n, vector<vector<int>>& grid, int& currIs) {
        if (i < 0 or i >= m or j < 0 or j >= n or grid[i][j] == 0) return;
        if (grid[i][j] == 1) {
            currIs++;
            grid[i][j] = 0;
        }
        bfs(i-1, j, m, n, grid, currIs);
        bfs(i+1, j, m, n, grid, currIs);
        bfs(i, j-1, m, n, grid, currIs);
        bfs(i, j+1, m, n, grid, currIs);
    }


public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int temp = 0;
                bfs(i, j, m, n, grid, temp);
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};

/*
[[1,1,0,0,0],[1,1,0,0,0],[0,0,0,1,1],[0,0,0,1,1]]
[[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]]
[[0,0,0,0,0,0,0,0]]
[[1,1,0,0,0],[1,1,0,0,0],[0,0,0,1,1],[0,0,0,1,1]]

*/
