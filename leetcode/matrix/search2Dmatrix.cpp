/**
 * @file search2Dmatrix.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/search-a-2d-matrix/
 * 
 */

class Solution {
    // time: O(n^2) space: O(1)
    bool bf(vector<vector<int>>& matrix, int target) {
        for (auto row : matrix)
            for (int i : row) 
                if (i == target) 
                    return true;
        return false;
    }
    
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return bf(matrix, target);
    }
};