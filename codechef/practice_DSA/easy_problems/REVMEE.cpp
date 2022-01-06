/**
 * @file REVMEE.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/REVMEE
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i = n-1; i >= 0; --i)
	{
	    cin >> arr[i];
	}
	for(int i = 0; i < n; ++i)
	{
	    cout << arr[i] << " ";
	}
	return 0;
}