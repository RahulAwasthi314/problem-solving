/**
 * @file letterCombination.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/letter-combinations-of-a-phone-number
 *
 */

class Solution {

    void backtrack(int pos, string& digits, string& s, map<char, string>& dict,  vector<string>& ans) {
        if (pos == digits.size()) {
            if (s != "") ans.push_back(s);
            return;
        }
        string temp = dict.find(digits[pos])->second;
        for (auto i : temp) {
            s.push_back(i);
            backtrack(pos+1, digits, s, dict, ans);
            s.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        map<char, string> dict;
        dict['2'] = "abc";
        dict['3'] = "def";
        dict['4'] = "ghi";
        dict['5'] = "jkl";
        dict['6'] = "mno";
        dict['7'] = "pqrs";
        dict['8'] = "tuv";
        dict['9'] = "wxyz";

        string s = "";
        vector<string> ans;
        backtrack(0, digits, s, dict, ans);

        return ans;
    }
};


class Solution {
    void helper(string& digits, int pos, map<int, string>& digitMap, string& currSol, vector<string>& allSol) {
        if (currSol.size() == digits.size()) {
            allSol.push_back(currSol);
        }
        if (pos == digits.size()) return;

        string s = digitMap[digits[pos] - '0'];

        for (char ch : s) {
            currSol.push_back(ch);
            helper(digits, pos+1, digitMap, currSol, allSol);
            currSol.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        map<int, string> digitMap = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"}, {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
        vector<string> allSol;
        string currSol;
        if (digits.size() == 0) return allSol;

        helper(digits, 0, digitMap, currSol, allSol);
        return allSol;
    }
};
