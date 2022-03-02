/**
 * @file lazy_salesman.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.codechef.com/COOK138C/problems/HOLIDAYS
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;
	while (k--) {
	    int n, w;
	    cin >> n >> w;
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) cin >> a[i];
	    sort(a.begin(), a.end(), greater<int>());
	    int sum = 0;
	    int i = 0;
	    for (i = 0; a[i] + sum < w; i++) sum += a[i];
	    cout << n-i-1 << endl;
	}
	return 0;
}
