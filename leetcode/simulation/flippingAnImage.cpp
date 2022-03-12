/**
 * @file flippingAnImage.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/flipping-an-image/
 * 
 */

class Solution {

    // time: O(n^2)
    vector<vector<int>> bf(vector<vector<int>>& image) {
        int n = image.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n/2; j++) {
                int t = image[i][n-j-1];
                image[i][n-j-1] = image[i][j];
                image[i][j] = t;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                image[i][j] = !((bool) image[i][j]);
            }
        }
        return image;
    }


public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        return bf(image);
    }
};