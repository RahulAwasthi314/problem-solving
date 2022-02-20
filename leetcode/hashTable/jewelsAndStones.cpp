/**
 * @file jewelsAndStones.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/jewels-and-stones/
 * 
 */

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> j;
        map<char, int> s;
        for (auto i : jewels) j[i]++;
        for (auto k : stones) s[k]++;
        int count = 0;
        for (auto i : jewels) {
            for (auto j : stones) {
                if (i == j) 
                    count++;
            }
        }
        return count;
    }
};