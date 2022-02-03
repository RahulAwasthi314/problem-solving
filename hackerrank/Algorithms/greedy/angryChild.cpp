/**
 * @file angryChild.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/angry-children/
 * 
 */

int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int ans = INT_MAX;
    for (int i = 0; i <= arr.size()-k; i++) {
            ans = min(arr[i+k-1] - arr[i], ans);
    }
    return ans;
}