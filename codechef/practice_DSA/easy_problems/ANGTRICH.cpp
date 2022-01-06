/**
 * @file ANGTRICH.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/ANGTRICH
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long a, b, c;
	
	cin >> a >> b >> c;
	if ((a > 0 && b > 0 && c > 0) && (a < 180 && b < 180 && c < 180))
	{
	    if ((a + b + c) == 180)
    	{
    	    cout << "YES";
    	}
    	else
    	{
    	    cout << "NO";
    	}
    }
    else
    {
        cout << "NO";
    }
	return 0;
}