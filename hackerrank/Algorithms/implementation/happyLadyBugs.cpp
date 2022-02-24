/**
 * @file happyLadyBugs.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/happy-ladybugs/
 * 
 */

string happyLadybugs(string str) {
    // one empty cell and no letter with count == 1;
    int count = 0;
    int size = str.size();
    map<char, int> b;
    for (auto i : str) 
        if (i == '_') count++;
        else b[i]++;
    for (auto i : b) if (i.second == 1) return "NO";
    if (count >= 1) return "YES";
    
    // no empty cell but givem string is happy
    if (count == 0) {
        if (str[0] != str[1]) return "NO";
        for (int i = 1; i < size; i++) {
            if ((str[i-1] == str[i]) or (str[i] == str[i+1])) continue;
            else return "NO";
        }
    }
    return "YES";
}