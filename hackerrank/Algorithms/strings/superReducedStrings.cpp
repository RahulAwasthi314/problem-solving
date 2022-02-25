/**
 * @file superReducedStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/reduced-string/
 * 
 */


bool is_unique(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i+1]) return false;
    }
    return true;
}

string superReducedString(string s) {
    string ans = "";
    while (!is_unique(s)) {
        int i = 0;
        ans = "";
        for (; i < s.size();) {
            if (s[i] == s[i+1]) i += 2;
            else { ans += s[i]; i += 1; }
            cout << ans << " ";
        }
        s = ans;
    }
    if (s.size() == 0) return "Empty String";
    return ans;
}