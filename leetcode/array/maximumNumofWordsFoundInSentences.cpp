/**
 * @file maximumNumofWordsFoundInSentences.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief
 * https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
 * 
 */

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxx = 0;
        for (auto sen : sentences) {
            int count = 0;
            for (int i = 0; i < sen.size(); i++) {
                if (sen[i] == ' ') count++;
            }
            maxx = max(maxx, count);
        }
        return maxx+1;
    }
};