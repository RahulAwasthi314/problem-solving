/**
 * @file maxAreaofCakePiece.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
 *
 */


class Solution {
public:
    int maxArea(int h, int w, vector<int>& h_cuts, vector<int>& v_cuts) {
        h_cuts.push_back(h); v_cuts.push_back(w);
        
        sort(h_cuts.begin(), h_cuts.end()); sort(v_cuts.begin(), v_cuts.end());
        
        int h_diff = h_cuts[0], v_diff = v_cuts[0];

        for (int i = 1; i < h_cuts.size(); i++) h_diff = max(h_diff, abs(h_cuts[i-1] - h_cuts[i]));
        for (int i = 1; i < v_cuts.size(); i++) v_diff = max(v_diff, abs(v_cuts[i-1] - v_cuts[i]));

        long ans = (h_diff % 1000000007) * (long)(v_diff % 1000000007);
        return ans % 1000000007;
    }
};