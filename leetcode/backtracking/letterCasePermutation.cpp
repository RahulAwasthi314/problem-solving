/**
 * @file letterCasePermutation.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/letter-case-permutation/
 */

class Solution {
    
    void bt(string& s, int i, string& currStr, vector<string>& allStr) {
        if (i == s.size()) {
            allStr.push_back(currStr);
            return;
        }
        if (s[i] >= 48 and s[i] <= 57) {
            currStr.push_back(s[i]);
            bt(s, i+1, currStr, allStr);
            currStr.pop_back();
        }
        if ((s[i] >= 65 and s[i] <= 90) or (s[i] >= 'a' and s[i] <= 'z')) {
            currStr.push_back(s[i]);
            bt(s, i+1, currStr, allStr);
            currStr.pop_back();
            currStr.push_back(s[i]^32);
            bt(s, i+1, currStr, allStr);
            currStr.pop_back();
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> allStr;
        string currStr;
        bt(s, 0, currStr, allStr);
        return allStr;
    }
};