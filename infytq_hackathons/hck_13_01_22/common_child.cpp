/**
 * @file common_child.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/infytq-jan13/challenges/common-child/
 */

int commonChild(string s1, string s2) {
    int count = 0;
    int arr[26] = {0};
    int s1_size = s1.size();
    int s2_size = s2.size();
    for (int i = 0; i < s1_size; i++) arr[s1[i] - 65]++;
    
    set<char> s;
    for (int i = 0; i < s2_size; i++) {
        s.insert(s2[i]);
    }
    for (auto ch : s) {
        if (arr[ch - 65] != 0) {
            count++;
        }
    }
    return count;
}