/**
 * @file implementStrStr.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/implement-strstr/
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i+= 1) {
            if (haystack.substr(i, needle.size()) == needle) return i;
        }
        return -1;
    }
};
