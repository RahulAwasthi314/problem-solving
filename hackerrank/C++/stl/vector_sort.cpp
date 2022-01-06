/**
 * @file vector_sort.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/vector-sort/
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
    int siz;
    vector<int> at;
    cin >> siz;
    for(int i = 0; i < siz; ++i) 
    {
        int a;
        cin >> a;
        at.push_back(a);
    }
    sort(at.begin(), at.end());
    for(int i : at) {
        cout << i << " ";
    }
    return 0;
}
