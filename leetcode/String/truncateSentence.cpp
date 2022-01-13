/**
 * @file truncateSentence.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/truncate-sentence
 * 
 */

class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        int size = s.size();
        int count = k;
        for (int i = 0; i < size; i++) {
            
            if (s[i] == ' ') {
                count--;
            }
            if (count == 0) break;
            s1 += s[i];
        }
        return s1;
    }
};