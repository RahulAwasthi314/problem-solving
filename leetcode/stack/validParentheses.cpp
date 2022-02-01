/**
 * @file validParentheses.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/valid-parentheses/
 * 
 */

class Solution {
    bool isOpening(char c) {
        vector<char> opening = {'[', '{', '('};
        for (auto i : opening) {
            if (c == i) return true;
        }
        return false;
    }
public:
    bool isValid(string s) {
        unordered_map<char, char> a = { {'[', ']'}, {'{','}'},  {'(',')'}  };
        stack<char> st;
        for (auto ch : s) {
            // incoming char is opening
            if (isOpening(ch)) st.push(ch);
            // incoming char is closing parentheses
            else {
                // if stack is empty, return false
                if (st.empty()) return false;
                // get the top value and check (if it's matching, then pop it)
                char t = st.top();
                if (a[t] == ch) st.pop();
                else return false;
            }
        }
        if (st.empty()) return true;
        return false;
    }
};