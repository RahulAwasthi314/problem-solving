/**
 * @file sets_stl.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/cpp-sets/
 * 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<long> s;
    int q;
    long d;
    int query;
    cin >> query;
    for(int i = 0; i < query; ++i) 
    {
        cin >> q >> d;
        switch (q) {
            case 1:
            {
                s.insert(d);
                break;
            }
            case 2:
            {
               s.erase(d); 
               break;
            }
            case 3:
            {
                set<long>::iterator it = s.find(d);
                if(it == s.end()) {
                    cout << "No" << "\n";
                }
                else {
                    cout << "Yes \n";
                }
                break;
            }
        }
    }
    
    return 0;
}