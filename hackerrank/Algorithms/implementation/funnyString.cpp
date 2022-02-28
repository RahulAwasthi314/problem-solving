/**
 * @file funnyString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/funny-string/
 * 
 */

string funnyString(string s) {
    vector<int> a;
    int size = s.size();
    for (int i = 0; i < size-1; i++) {
        a.push_back(abs(s[i]-s[i+1]));
    }
    vector<int> b = a;
    for (int i = 0, j = size-2;j != 0; i++, j--) {
        if (b[j] != a[i]) return "Not Funny";
    }
    return "Funny";
}