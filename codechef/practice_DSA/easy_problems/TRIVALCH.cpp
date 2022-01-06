/**
 * @file TRIVALCH.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/TRIVALCH
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[3];
	int max = 0;
	int sum = 0;
	for(int i = 0; i < 3; ++i)
	{
	    cin >> arr[i];
	    
	    if(arr[i] > max)
	    {
	        max = arr[i];
	    }
	}
	for(int i = 0; i < 3; ++i)
	{
	    if (arr[i] != max)
	    {
	        sum += arr[i];
	    }
	}
	if(sum > max)
	{
	    cout << "YES";
	}
	else
	{
	    cout << "NO";
	}
	
	return 0;
}