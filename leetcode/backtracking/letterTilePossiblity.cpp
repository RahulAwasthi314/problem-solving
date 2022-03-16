/**
 * @file letterTilePossiblity.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/letter-tile-possibilities/
 * 
 */

class Solution {
    /*
        for finding valid subsets 
    */
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
    
    int findSubsets(string& tiles) {
        vector<vector<char>> allSol;
        vector<char> currSol;
        unordered_map<char, int> fremap;
        for (char ch : tiles) fremap[ch]++;
        btSubset(fremap, tiles.size()-1, currSol, allSol);
        for (auto vec : allSol) {
            for (auto ch : vec) cout << ch;
            cout << endl;
        }
        return allSol.size();
    }
    
    
    /*
        find valid subsets
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

    int findPermutations(string& tiles) {
        vector<vector<char>> allSol;
        vector<char> currSol;
        unordered_map<char, int> fremap;
        for (char ch : tiles) fremap[ch]++;
        bt(fremap, tiles.size(), currSol, allSol);

        for (auto vec : allSol) {
            for (auto ch : vec) cout << ch;
            cout << " ";
        }
        return allSol.size();
    }
    
public:
    int numTilePossibilities(string tiles) {
        // find the valid subsets
        int ans = 0;
        ans += findSubsets(tiles);
        ans += findPermutations(tiles);
        return ans;
        
    }
};