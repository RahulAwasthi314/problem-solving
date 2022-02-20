/**
 * @file equalizeArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/equality-in-a-array/
 * 
 */

int equalizeArray(vector<int> arr) {
    map<int, int> a;
    for (auto i : arr) a[i]++;
    pair<int, int> maxx;
    for (auto i : a) if (i.second > maxx.second) maxx = i;
    int ans = 0;
    for (auto i : a) if (i.first != maxx.first) ans += i.second;
    return ans;
}
