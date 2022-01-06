/**
 * @file VALTRI.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/VALTRI
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin >> a;
	if (a % 5 == 0 || a % 6 == 0)
	{
	    cout << "YES";
	}
	else
	{
	    cout << "NO";
	}
	return 0;
}
