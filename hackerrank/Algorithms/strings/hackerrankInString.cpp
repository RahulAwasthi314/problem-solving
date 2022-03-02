/**
 * @file hackerrankInString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/hackerrank-in-a-string/
 * 
 */

string hackerrankInString(string t) {
    string s = "hackerrank";
    if (s.size() > t.size()) return "NO";
        int i = 0, j = 0;
        for (; i != s.size();) {
            if (j == t.size()) return "NO";
            if (s[i] == t[j]) {
                i++; j++;
            }
            else {
                j++;
            }
        }
        if (i == s.size()) {
            return "YES";
        }
        return "NO";
}