/**
 * @file findDifference.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/find-the-difference/
 * 
 */

class Solution {
    int freMapMethod(string s, string t) {
        unordered_map<char, int> freMap;
        for (auto i : t) {
            freMap[i]++;
        }
        for (auto j : s) {
            freMap[j]--;
        }
        for (auto i : freMap) {
            if (i.second != 0) {
                return i.first;
            }
        }
        return '\n';
    }
public:
    char findTheDifference(string s, string t) {
        return freMapMethod(s, t);
    }
};