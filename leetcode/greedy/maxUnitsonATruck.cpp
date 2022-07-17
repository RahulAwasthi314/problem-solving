/**
 * @file maxUnitsonATruck.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/maximum-units-on-a-truck/
 *
 */

struct cmp {
    bool operator()(vector<int>& a, vector<int>& b) {
        if (a[1] == b[1]) return a[0] > b[0];
        return a[1] > b[1];
    }
};

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp());
        
        int maxUnits = 0;
        int i = 0;
        while (truckSize > 0 and i < boxTypes.size()) {
            int units_depart = min(truckSize, boxTypes[i][0]);
            maxUnits += (units_depart * boxTypes[i][1]);
            truckSize -= units_depart;
            i++;
        }
        return maxUnits;
    }
};

