/**
 * @file pairs.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/h-cs3c-feb16/challenges/pairs
 * 
 */

int pairs(int k, vector<int> arr) {
    set<int> s(arr.begin(), arr.end());
    int count = 0;
    for (auto i : s) {
        if (s.find(i+k) != s.end()) count++;
        if (s.find(i-k) != s.end()) count++;
    }
    return count/2;
}