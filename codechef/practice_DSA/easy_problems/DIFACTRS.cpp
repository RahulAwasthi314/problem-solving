/**
 * @file DIFACTRS.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/DIFACTRS
 * 
 */

#include <iostream>
using namespace std;

int main() {
    int num;
    int c = 0;
	cin >> num;
	for (int i = 1; i <= num/2; ++i)
	{
	    if (num % i == 0)
	    {
	        c++;
	    }
	}
	c++;
	cout << c << endl;
	for (int i = 1; i <= num/2; ++i)
	{
	    if (num % i == 0)
	    {
	        cout << i << " ";
	    }
	}
	cout << num;
	
	return 0;
}