/**
 * @file countConsistentStrings.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/count-the-number-of-consistent-strings/
 *
 */

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> arr(26, 0);
        for (char ch : allowed) {
            arr[ch-'a'] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            for (int j = 0; j < words[i].size(); j++) {
                if (arr[words[i][j]-'a'] == 0) flag = false;
            }
            if (flag) cnt++;
        }
        return cnt;
    }
};
