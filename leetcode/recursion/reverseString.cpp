/**
 * @file reverseString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/reverse-string/
 * 
 */

class Solution {
    // iterative step
    // Time Complexity: O(n), Space: O(1)
    void iterative(vector<char>& s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) {
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
        }
    }
    void recursive(vector<char>& s, int i, int j) {
        // base step
        if (i > j) return;
        // induction step
        swap(s[i], s[j]);
        // hypothesis step
        recursive(s, ++i, --j);
    }
public:
    // recursive
    // time: O(n) space: O(n/2) {stack space}
    void reverseString(vector<char>& s) {
        recursive(s, 0, s,size()-1);
        iterative(s);
        return;
    }
};