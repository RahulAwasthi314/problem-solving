/**
 * @file peaceful_party.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.codechef.com/COOK138C/problems/MAYOR_PARTY
 * 
 */

#include <iostream>
using namespace std;

int main() {
	int k;
    cin >> k;
	while (k--) {
	    int a, b, c;
        cin >> a >> b >> c;
        // cout << a << " " << b << " " << c;
        if (a + c > b) cout << a + c << endl;
        else cout << b << endl;
	}
	return 0;
}
