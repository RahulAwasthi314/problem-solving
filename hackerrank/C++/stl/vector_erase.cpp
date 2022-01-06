/**
 * @file vector_erase.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/vector-erase/
 * 
 */


#include <iostream>
#include <vector>
using namespace::std;
int main() {
//     unsigned short a;
//     a = 65535;
//     printf("%d", a);

    vector<int> a;
    int len;

    cin >> len;
    for(int i = 0; i < len; ++i) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    int del_data;
    int init_range, f_range;

    cin >> del_data;
    cin >> init_range >> f_range;
    
    vector<int>::iterator it, it1, it2;
    it = a.begin()+del_data-1;
    a.erase(it);
    it1 = a.begin()+init_range-1;
    it2 = a.begin()+f_range-1;

    a.erase(it1, it2);

    cout << a.size() << "\n";
    for (int i : a){
        cout << i << " ";
    }
    return 0;
}
