/**
 * @file repeatedString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/repeated-string/
 * 
 */

long repeatedString(string s, long n) {
    int inOneStr = 0;
    int x = s.size();
    for (auto i : s) if (i == 'a') inOneStr++;
    long ans = inOneStr * (n / x);
    cout << ans;
    n = n%x;
    for (int i = 0; i < n; i++) if (s[i] == 'a') ans++;
    return ans;
}
