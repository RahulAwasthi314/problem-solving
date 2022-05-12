/**
 * @file countSortedVowelStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/count-sorted-vowel-strings/
 *
 */

class Solution {

    void helper(string& currSol, vector<string>& allSol, vector<string>& vec, int pos, int n) {
        if (currSol.size() == n) {
            allSol.push_back(currSol);
            return;
        }
        for (int i = pos; i < 5; i++) {
            string s = currSol + vec[i];
            helper(s, allSol, vec, i, n);
        }
    }

    int solution1(int n) {
        vector<string> vec = {"a", "e", "i", "o", "u"};
        string currSol;
        vector<string> allSol;
        helper(currSol, allSol, vec, 0, n);
        return allSol.size();
    }

public:
    int countVowelStrings(int n) {
        int v1 = 1, v2 = 1, v3 = 1, v4 = 1, v5 = 1;
        for (int i = 1; i < n; i++) {
            v1 += v2 + v3 + v4 + v5;
            v2 += v3 + v4 + v5;
            v3 += v4 + v5;
            v4 += v5;
        }
        return v1 + v2 + v3 + v4 + v5;
    }
};
