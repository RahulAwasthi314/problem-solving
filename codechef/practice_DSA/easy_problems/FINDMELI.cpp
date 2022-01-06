/**
 * @file FINDMELI.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/FINDMELI
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int idx = -1;
	int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        cin >>arr[i];
        if (arr[i] == k)
        {
            idx = 1;
        }
    }
    cout << idx;
	return 0;
}