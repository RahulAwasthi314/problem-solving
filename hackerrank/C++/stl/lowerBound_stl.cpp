/**
 * @file lowerBound_stl.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/cpp-lower-bound/
 * 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> vec;
    int q;
    vector<int> query;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        vec.push_back(num);    
    }
    cin >> q;
    for(int i = 0; i < q; ++i) {
        int num;
        cin >> num;
        query.push_back(num);
    }
    
    // begin a loop
    // check for the number if it exists
    // else print its lower bound
    
    vector<int>::iterator it;
    
    for(int i:query) {
        it = lower_bound(vec.begin(), vec.end(), i);
        if(*it == i)
        {
            cout << "Yes " << it-vec.begin() + 1;
        }       
        else {
            cout << "No " << it-vec.begin() + 1;
        }
        cout << "\n";
    }
    
    return 0;
}