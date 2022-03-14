/**
 * @file matrixDiagSum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/matrix-diagonal-sum/
 * 
 */


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        if (size == 1) return mat[0][0];
        
        int main = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if ((i == j) or (i+j == size-1)) main += mat[i][j];
            }
        }
        return main;
    }
};