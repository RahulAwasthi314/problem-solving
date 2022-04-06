/**
 * @file findCenterOfStarGraph.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/find-center-of-star-graph/
 *
 */

class Solution {
    int constantTimeSol(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] or edges[0][0] == edges[1][1])
            return edges[0][0];
        return edges[0][1];
    }

public:
    int findCenter(vector<vector<int>>& edges) {
        return constantTimeSol(edges);
    }
};
