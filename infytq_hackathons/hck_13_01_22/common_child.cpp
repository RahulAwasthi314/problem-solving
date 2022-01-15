/**
 * @file common_child.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/infytq-jan13/challenges/common-child/
 */

#include <iostream>
#include <vector>
#include <set>
using namespace std;

// not appropriate approach to solve this question
int commonChild(string s1, string s2) {
    int count = 0;
    int arr[26] = {0};
    int s1_size = s1.size();
    int s2_size = s2.size();
    for (int i = 0; i < s1_size; i++) arr[s1[i] - 65]++;
    
    set<char> s;
    for (int i = 0; i < s2_size; i++) {
        s.insert(s2[i]);
    }
    for (auto ch : s) {
        if (arr[ch - 65] != 0) {
            count++;
        }
    }
    return count;
}

// DP solution
int commonChild_dp(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    
    int count = 0;

    if (n != m) {
        return false;
    }
    // create a 2D matrix of size m + 1
    vector<vector<int>> arr(m + 1, vector<int> (m + 1, 0));

    // initialize the forst row as 0
    // for (auto i : arr) {
    //     cout << i.size() << " ";
    //     // arr[0][i] = 0;
    // }
    // fill the values in the matrix
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i] == arr[j]) {
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            else {
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return arr[n-1][m-1];
}
int main() {
    string s1 = "SHINCHAN";
    string s2 = "NOHARAAA";
    // cout << "The length of longest substring: " <<;
    commonChild_dp(s1, s2);
    return 0;
}