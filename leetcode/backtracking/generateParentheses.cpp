/**
 * @file generateParentheses.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/generate-parentheses/
 * 
 */

class Solution {
    vector<string> ans;
    
    void generate(string s, int open, int close) {
        // base case
        if (close == 0 and open == 0) {
            // push the strings to the global container
            ans.push_back(s);
            return;
        }
        
        // inductive step
        if (open != 0 and open < close) {
            s = s+'(';
            generate(s, open-1, close);
            s.pop_back();
            s = s + ')';
            // hypothesis case
            generate(s, open, close-1); 
        } else {
            if (open == 0) {
                s = s+')';
                generate( s, open, close-1);
            } 
            if (open == close) {
                s = s+'(';
                generate( s, open-1, close);
            }
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string s = "(";
        generate(s, n-1, n);
        return ans;
    }
};