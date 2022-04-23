/**
 * @file trappingRainWater.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/trapping-rain-water/
 *
 */


class Solution {
    vector<int> NextGreatestLeft(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        ans[0] = arr[0];
        for (int i = 1; i < n; i++) {
            ans[i] = max(arr[i], ans[i-1]);
        }
        //cout << "MAX left: ";
        //for (int i : ans) cout << i << " "; cout << endl;
        return ans;

    }
    vector<int> NextGreatestRight(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, 0);
        ans[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            ans[i] = max(arr[i], ans[i+1]);
        }
        //cout << "MAX right: ";
        //for (int i : ans) cout << i << " "; cout << endl;
        return ans;
    }
public:
    int trap(vector<int>& height) {
        vector<int> maxl = NextGreatestLeft(height);
        vector<int> maxr = NextGreatestRight(height);
        int ans = 0, n = height.size();
        for (int i = 0; i < n; i++) {
            ans += min(maxl[i], maxr[i]) - height[i];
        }
        return ans;
    }
};
