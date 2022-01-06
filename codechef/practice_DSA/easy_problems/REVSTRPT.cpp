/**
 * @file REVSTRPT.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/REVSTRPT
 * 
 */

#include <iostream>
using namespace::std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n+1; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            cout << " ";
        }
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}