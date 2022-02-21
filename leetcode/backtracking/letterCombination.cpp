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