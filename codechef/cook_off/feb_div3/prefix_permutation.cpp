/**
 * @file prefix_permutation.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.codechef.com/COOK138C/problems/PREFPERM
 * 
 */


// Wrong answer


#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    while (k--) {
        int k, n;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        // if (n == k) {
        //     for (int i = 0; i < n; i++) cout << a[i] << " ";
        // }
        // else if (k > n) {
        //     hashmap
        // }
        for (int i = 0; i < n; i++) {
            cout << i+1 << " ";
        }
        cout << endl;
        
    }
	return 0;
}
/**
 * input
3
8 4
3 6 7 8
7 1
7
5 5
1 2 3 4 5

output
2 3 1 6 4 5 7 8
4 6 1 5 2 7 3
1 2 3 4 5
*/

