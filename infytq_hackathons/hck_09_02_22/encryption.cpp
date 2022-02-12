/**
 * @file encryption.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/contests/h-cs3c-feb9/challenges/encryption/
 * 
 */

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

string encryption(string s1) {
    string s = "";
    int size = 0;
    string ans = "";
    for (auto i : s1) {
        if (i != ' ') {
            s += i;
            size++;
        }
    }
    int r = floor(pow(size, 0.5));
    int c = ceil(pow(size, 0.5));
    while (r * c < size) {
        if (r < c) r++;
        else c++;
    }
    cout << r << " " << c << "\n";
    for (int i = 0; i < c; i++) {
        for (int j = i; j < size; j = j+c) {
            ans += s[j];
        }
        ans += ' ';
    }
    return ans;
}


int main(int argc, char* argv[]) {
    string s = "haveaniceday";
    s = encryption(s);
    cout << s;
    return 0;
}