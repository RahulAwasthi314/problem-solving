/**
 * @file getMaximumGenerated.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/get-maximum-in-generated-array/
 *
 */


class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> vec(n+1, -1);
        for (int i = 0; i <= n; i++) {
            if (i == 0 or i == 1) vec[i] = i;
            if (2 * i >= 2 and 2 * i <= n) if (vec[2 * i] == -1) vec[2 * i] = vec[i];
            if (2 *i + 1 >= 2 and 2 *i + 1 <= n) if (vec[2*i+1] == -1) vec[2*i+1] = vec[i] + vec[i+1];
        }
        int maxx = 0;
        for (int i = 0; i <= n; i++) {
            cout << vec[i] <<  " ";
            maxx = max(vec[i], maxx);
        }
        return maxx;
    }
};
