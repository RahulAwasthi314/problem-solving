/**
 * @file transposeMatrix.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/transpose-matrix/
 * 
 */
class Solution {
    // Time: O(n^2) Space: O(n^2)
    vector<vector<int>> transposeBF(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> vec (n, vector<int> (m, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                vec[j][i] = matrix[i][j];
            }
        }
        return vec;
    }
    
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        return transposeBF(matrix);
    }
};