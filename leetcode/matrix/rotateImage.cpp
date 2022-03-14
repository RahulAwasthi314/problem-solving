/**
 * @file rotateImage.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/rotate-image/
 * 
 */

class Solution {
    // Time: O(n^2) space: O(1)
    void transposeAndRotate(vector<vector<int>>& matrix) {
        // transpose inplace
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i < j) {
                    int t = matrix[j][i];
                    matrix[j][i] = matrix[i][j];
                    matrix[i][j] = t;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n/2; j++) {
                int t = matrix[i][j];
                matrix[i][j] = matrix[i][n-j-1];
                matrix[i][n-j-1] = t;
            }
        }
        return;
    }
    
public:
    void rotate(vector<vector<int>>& matrix) {
        transposeAndRotate(matrix);
    }
};