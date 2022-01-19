#include <bits/stdc++.h>
using namespace std;

// for using it in toDec conversion
vector<int> getNum(int num) {
    vector<int> s;
    while (num != 0) {
        s.push_back(num % 10);
        num /= 10;
    }
    return s;
}



// convert number from any base to decimal
// arguments details:
// num : number of any base from which we need to convert it to decimal
// base: the current base of number
int toDec(int num, int base) {
    int power = 0;
    int res = 0;
    vector<int> s = getNum(num);
    for (auto i : s) {
        cout << i << " ";
    }
    cout<< endl;
    for (int i = 0; i < s.size(); i++) {
        res += s[i] * pow(base, i);
    }
    return res;
}


int main () {
    int num = 25;
    int base = 8;
    cout << toDec(num, base);
    cout << endl;
    return 0;
}