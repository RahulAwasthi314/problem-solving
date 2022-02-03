/**
 * @file minAbsoluteDiff.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/
 * 
 */

int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int ans = INT_MAX;
    for (int i = 1; i < arr.size(); i++) {
        ans = min(abs(arr[i-1]-arr[i]), ans);
    }
    return ans;
}