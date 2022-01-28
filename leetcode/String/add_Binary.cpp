/**
 * @file add_Binary.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/add-binary/
 * 
 */

#include <iostream>
using namespace std;

string addBinary(string a, string b) {
    int l = a.size(), m = b.size();
    
    int carry = 0;
    string s = "";
    
    while (l >= 0 and m >= 0) {
        int sum = 0;
        if (a[l] == '1' and b[m] == '1') { sum = 0; carry = 1; }
        else if (a[l] == '0' and b[m] == '0') { sum = 0; carry = 0; }
        else { sum = 1; carry = 0; }
        // add check the condition of carry for that particular digit sum
        if(flad = 1)


        // s += (char) sum;
        if (sum == 1) s += '1';
        else s += '0';
        l--; m--;
    }
    while (l >= 0) {
        if (a[l] == '0') { 
            // a[i] = 0, carry = 0
            if (carry == 1) s += '1';
            // a[i] = 0, carry = 1
            else s+= '0';
        }
        else {
            // a[i] = 1, carry = 1
            if (carry == 1) {
                s += a[l];
                carry = 1;
            }
            // a[i] = 1, carry = 0
            else {
                s += '1';
            }
        }
        l--;
    }
    while (m >= 0) {
        if (b[m] == '0') { 
            // a[i] = 0, carry = 0
            if (carry == 1) s += '1';
            // a[i] = 0, carry = 1
            else s+= '0';
        }
        else {
            // a[i] = 1, carry = 1
            if (carry == 1) {
                s += b[m];
                carry = 1;
            }
            // a[i] = 1, carry = 0
            else {
                s += '1';
            }
        }
        m--;
    }
    //reverse(s.begin(), s.end());
    return s;
}

int main() {
    string s = addBinary("1010", "1011");
    cout << s;
}