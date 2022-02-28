/**
 * @file pangram.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/pangrams/
 * 
 */

string pangrams(string s) {
    vector<int> freMap(26, 0);
    for (char ch : s) {
        if (ch >= 65 and ch <= 90)  freMap[ch-'A']++;
        if (ch >= 97 and ch <= 122) freMap[ch-'a']++;
    }
    for (int i : freMap) if (i == 0) return "not pangram";
    return "pangram";
}