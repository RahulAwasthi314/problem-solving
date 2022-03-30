/**
 * @file countingWordsWithGivenPrefix.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/counting-words-with-a-given-prefix/
 *
 */


class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            if (words[i].size() >= n) {
                for (int j = 0; j < n; j++) {
                    if (pref[j] != words[i][j]) flag =  false;
                }
                if (flag) count++;
            }
        }
        return count;
    }
};
