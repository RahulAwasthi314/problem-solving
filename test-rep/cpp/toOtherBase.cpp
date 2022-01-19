#include <bits/stdc++.h>
using namespace std;

vector<int> getNum(int num, int base) {
    vector<int> s;
    while (num != 0) {
        s.push_back(num % base);
        num /= base;
    }
    reverse(s.begin(), s.end());
    return s;
}


// convert any number from decimal to other base
// working perfectly
// arguments details:
// num : pass the decimal number
// base: reuired base in which conversion is required
int toOtherBase(int num, int base) {
    vector<int> s = getNum(num, base);
    int res = 0;
    // added for verification purpose
    // for (int i : s) {
    //     cout << i << " ";
    // }
    cout << endl;
    for (int i : s) {
        res = res * 10 + i;
    }
    return res;
}

int main () {
    int num = 25;
    int base = 8;
    cout << toOtherBase(num, base);
    cout << endl;
    return 0;
}