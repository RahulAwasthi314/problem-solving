/**
 * @file strings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/c-tutorial-strings/
 * 
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    char c1;
    int l1, l2;
    cin >> s1 >> s2;
    l1 = s1.size();
    l2 = s2.size();
    s3 = s1 + s2;
    c1 = s1[0];
    s1[0] = s2[0];
    s2[0] = c1;
    cout << l1 << " " << l2 << endl;
    cout << s3 << endl;
    cout << s1 << " " << s2;
  
    return 0;
}
