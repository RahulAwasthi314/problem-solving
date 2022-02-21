/**
 * @file stringCompression.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/string-compression/
 * 
 */

class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        map<char, int> freMap;
        for (auto i : chars) freMap[i]++;
        chars.clear();
        for (auto i : freMap) {
            if (i.second == 1) {
                ans += 1;
                chars.push_back(i.first);
            }
            else {
                ans += i.second;
                string t = to_string(i.second);
                chars.push_back(i.first);
                for (auto i : t) chars.push_back(i);
            }
        }
        return ans;
    }
};