/**
 * @file findSumofSeq.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem statement:
 *      2
 *      5 3
 *      1 2 3 4 1
 *      6 2
 *      1 2 1 2 1 2
 * 
 * 
 *      sum:1 sum:3 sum:6 sum:10 sum:11  
 *      sum:2 sum:5 sum:9 sum:10  
 *      sum:3 sum:7 sum:8  
 *      sum:4 sum:5  
 *      sum:1  
 *      sum:1 sum:3 sum:4 sum:6 sum:7 sum:9  
 *      sum:2 sum:3 sum:5 sum:6 sum:8  
 *      sum:1 sum:3 sum:4 sum:6  
 *      sum:2 sum:3 sum:5  
 *      sum:1 sum:3  
 *      sum:2 
 * 
 */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    cin >> t;
   
    while (t--) {
        // take input test case
        int n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // iterate through list and find subsequence
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += a[k];
                }
                cout << "sum:" << sum << " ";
            }
            cout << endl;
        }
        
    }

    return 0;
}
