/**
 * @file checkforequalnumOccurances.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
 *
 */

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m;
        for (char i : s) m[i]++;
        int n = m.find(s[0])->second;
        for (auto& it : m) {
            if (it.second != n) {
                return false;
            }
        }
        return true;
    }
};
