/**
 * @file doorsAndkeys.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://codeforces.com/contest/1644/problem/A
 * 
 */


#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    
    while (k--) {
        string s;
        cin >> s;
        map<char, int> freMap;
        for (int i = 0; i < s.size(); i++) {
            freMap[s[i]] = i;
        }
        int count = 0;
        if (freMap.find('r')->second < freMap.find('R')->second) {
            count++;
        }
        if (freMap.find('b')->second < freMap.find('B')->second) {
            count++;
        }
        if (freMap.find('g')->second < freMap.find('G')->second) {
            count++;
        }
        if (count == 3) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
