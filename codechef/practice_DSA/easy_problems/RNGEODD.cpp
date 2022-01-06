/**
 * @file RNGEODD.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/RNGEODD
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
	    if (i % 2)
	    {
	        cout << i << " ";
	    }
	}
	return 0;
}
