/**
 * @file SUMEVOD.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/SUMEVOD
 * 
 */

#include <iostream>
using namespace::std;

int main() {
	// your code goes here
	int evn_count = 0, odd_count = 0;
	long even = 0, odd = 0;
	int n;
	cin >> n;
	for(int i = 1; evn_count < n || odd_count < n; ++i)
	{
	    if (i % 2 == 0)
	    {
	        evn_count++;
	        even += i;
	    }
	    else
	    {
	        odd_count++;
	        odd += i;
	    }
	}
	cout << odd << " " << even;
	return 0;
}