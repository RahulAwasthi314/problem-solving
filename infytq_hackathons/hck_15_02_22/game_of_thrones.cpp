/**
 * @file game_of_thrones.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/h-cs3c-feb15/challenges/game-of-thrones/
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
