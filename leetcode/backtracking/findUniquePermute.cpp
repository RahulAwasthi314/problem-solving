/**
 * @file findUniquePermute.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/letter-tile-possibilities/
 * 
 */


#include <bits/stdc++.h>
using namespace std;

/*
    for finding unique permutations 
*/

/*
find the valid subsets for the following problem: 
input:     "AAB"
output:    "AAB", "ABA", "BAA"
*/

void bt(unordered_map<char, int>& fremap, int n, vector<char>& currSol, vector<vector<char>>& allSol) {
    if (currSol.size() == n) {
        allSol.push_back(currSol);
        return;
    }
    
    for (auto& it : fremap) {
        if (it.second > 0) {
            it.second--;
            currSol.push_back(it.first );
            bt(fremap, n, currSol, allSol);
            currSol.pop_back();
            it.second++;
        }
    }
}

void findPermutations(string& tiles) {
    vector<vector<char>> allSol;
    vector<char> currSol;
    unordered_map<char, int> fremap;
    for (char ch : tiles) fremap[ch]++;
    bt(fremap, tiles.size(), currSol, allSol);
    
    for (auto vec : allSol) {
        for (auto ch : vec) cout << ch;
        cout << " ";
    }
    return;
}

int main() {
    string tiles = "AAB";
    findPermutations(tiles);
    return 0;
}