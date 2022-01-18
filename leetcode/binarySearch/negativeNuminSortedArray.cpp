/**
 * @file negativeNuminSortedArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try the problem here:
 * https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
 */


// brute force: time complexity : O(m * n)
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i]. size(); j++) {
                if (grid[i][j] < 0) {
                    count++;
                }
            }
        }
        return count;
    }
};

// because array is sorted, apply binary search, row wise or col wise
// time complexity : O(max(m, n) log min(m, n))