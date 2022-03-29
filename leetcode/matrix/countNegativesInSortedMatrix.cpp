/**
 * @file countNegativesInSortedMatrix.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
 *
 */

class Solution {
    // time: O(n*m)
    int cntNeg(vector<vector<int>>& grid) {
        int cnt = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] < 0) cnt++;
            }
        }
        return cnt;
    }
public:
    int countNegatives(vector<vector<int>>& grid) {
        return cntNeg(grid);
    }
};
