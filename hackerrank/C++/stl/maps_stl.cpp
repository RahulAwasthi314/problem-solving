/**
 * @file maps_stl.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/cpp-maps/
 * 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int query_num;
    string s;
    int n;
    int q;
    
    map<string, int> m;
    
    cin >> query_num;
    
    for(int i = 0; i < query_num; ++i) {
        cin >> q >> s;
        if (q == 1) {
            cin >> n;
        }
        switch(q) {
            case 1:
            {
                map<string,int>::iterator it = m.find(s);
                if (it == m.end()) {
                    m.insert(make_pair(s, n));
                }
                else {
                    it->second += n;
                }
                
                break;
            }
            case 2:
            {
                m.erase(s);
                break;
            }
            case 3:
            {
                map<string, int>::iterator it = m.find(s);
                if (it == m.end()) {
                    cout << "0\n";
                }
                else {
                    cout << it->second << "\n";
                }
                break;
            }
        }
    }
    return 0;
}
