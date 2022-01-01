/**
 * @file FLOW007.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/LRNDSA01/problems/TEST
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	while(getline(cin, s)) {
	    if (s == "42") {
	        break;
	    }
	    else {
	    cout << s << '\n';
	    }
	}
	return 0;
}