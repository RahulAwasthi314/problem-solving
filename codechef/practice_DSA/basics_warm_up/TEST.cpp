/**
 * @file TEST.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/LRNDSA01/problems/FLOW007
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int k;
	cin >> k;
	while (k--) {
	    int num;
	    cin >> num;
	    
	    int rev = 0;
	    while (num) {
	        rev = (rev * 10) + num % 10;
	        num /= 10;
	    }
	    cout << rev << '\n';
	}
	return 0;
}