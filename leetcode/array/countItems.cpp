/**
 * @file countItems.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/count-items-matching-a-rule/
 * 
 */


class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int pos = -1;
        int count = 0;
        if (ruleKey == "type") pos = 0;
        else if (ruleKey == "color") pos = 1;
        else if (ruleKey == "name") pos = 2;
        
        for (int i = 0; i < items.size(); i++) {
            if (items[i][pos] == ruleValue) count++;
        }
        return count;
    }
};