/**
 * @file SQALPAT.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/SQALPAT
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
	    for(int j = 0; j < 5; ++j)
	    {
	        if (i % 2 == 0)
	        {
	            cout << 5 * i + (j + 1) << " ";
	        }
	        else
	        {
	            cout << 5 * (i + 1) - j << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}