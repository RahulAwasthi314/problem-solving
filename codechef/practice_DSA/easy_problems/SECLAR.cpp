/**
 * @file SECLAR.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/SECLAR
 * 
 */

#include <iostream>
using namespace::std;

int main()
{
    int a, b, c, l, r;
    cin >> a >> b >> c;
    if (a >= b && b >= c)
    {
        cout << b;
    }
    if (a >= c && c >= b)
    {
        cout << c;
    }
    if (b >= a && a >= c)
    {
        cout << a;
    }
    if (c >= a && a >= b)
    {
        cout << a;
    }
    if (b >= c && c >= a)
    {
        cout << c;
    }
    if (c >= b && b >= a)
    {
        cout << b;
    }
}
/*
10 15 20    -5 -5
10 20 15    -10 5 
15 10 20     5 -10
15 20 10    -5  10
20 10 15    10  -5
20 15 10    5   5

*/