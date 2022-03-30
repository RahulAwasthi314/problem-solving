/**
 * @file maxNestingDepthofParentheses.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 *
 */



class Solution {
public:
    int maxDepth(string s) {
        int maxDep = 0;
        stack<char> ss;
        for (char ch : s) {
            if (ch == '(') {
                ss.push(ch);
                int n = ss.size();
                if (n > maxDep) maxDep = n;
            } else if (!ss.empty() and ch == ')') {
                ss.pop();
            }
        }
        return maxDep;

    }
};
