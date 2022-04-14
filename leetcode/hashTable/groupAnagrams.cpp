/**
 * @file groupAnagrams.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * Try out the problem here:
 * https://leetcode.com/problems/group-anagrams/
 *
 */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> anagram_map;
        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            anagram_map[key].push_back(s);
        }
        // for (auto it: anagram_map) {
        //     cout << it.first << " : " ;
        //     for (auto i : it.second) {
        //         cout << i << " ";
        //     } cout << endl;
        // }

        for (auto it : anagram_map) {
            vector<string> s;
            for (string& ss : it.second) s.push_back(ss);
            result.push_back(s);
        }
        return result;
    }
};
