/**
 * @file findUniqueSubset.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/letter-tile-possibilities/
 * 
 */

/*
find the valid subsets for the following problem: 
input:      "AAB"
output:     "BA"    "B"   "AB"  "AA"    "A"

*/

/*
    for finding valid subsets 
*/

#include <bits/stdc++.h>
using namespace std;

void btSubset(unordered_map<char, int>& fremap, int n, vector<char>& currSol, vector<vector<char>>& allSol) {
    if (currSol.size() == n) {
        return;
    }
    
    for (auto& it : fremap) {
        if (it.second > 0) {
            currSol.push_back(it.first);
            it.second--;
            btSubset(fremap, n, currSol, allSol);
            allSol.push_back(currSol);
            it.second++;
            currSol.pop_back();
        }
    }
}

void findSubsets(string& tiles) {
    vector<vector<char>> allSol;
    vector<char> currSol;
    unordered_map<char, int> fremap;
    for (char ch : tiles) fremap[ch]++;
    btSubset(fremap, tiles.size()-1, currSol, allSol);
    for (auto vec : allSol) {
        for (auto ch : vec) cout << ch;
        cout << endl;
    }
    return;
}

int main() {
    string tiles = "AAB";
    findSubsets(tiles);
    return 0;

}