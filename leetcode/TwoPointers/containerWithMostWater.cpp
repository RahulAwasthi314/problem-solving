/**
 * @file containerWithMostWater.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/container-with-most-water/
 *
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size()-1;
        int maxx = 0;
        while (start < end) {
            maxx = max(maxx, (end-start)* min(height[start], height[end]));
            height[start] < height[end] ? start++ : end--;
        }
        return maxx;
    }
};
