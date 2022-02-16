/**
 * @file gameOfThrones.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/game-of-thrones/
 * 
 */

string gameOfThrones(string s) {
    unordered_map<char, int> hashMap;
    for (auto i : s) {
        hashMap[i]++;
    }
    int count = 0;
    for(auto i : hashMap) {
        if (i.second % 2 != 0) {
            count++;
        }
    }
    if (count <= 1) return "YES";
    return "NO";
}