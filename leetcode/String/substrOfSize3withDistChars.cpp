/**
 * @file substrOfSize3withDistChars.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
 *
 */


class Solution {

    bool hasDistinctChars(int beg, int end, string& s) {
        int fremap[26] = {0};
        for (int i = beg; i < end; i++) {
            fremap[s[i]-'a']++;
            if (fremap[s[i]-'a'] > 1) return false;
        }
        return true;
    }

public:
    int countGoodSubstrings(string s) {
        int cntSubstr = 0;
        if (s.size() < 3) return 0;
        for (int i = 0, j = i + 3; j <= s.size(); i++, j++) {
            hasDistinctChars(i, j, s) ? cntSubstr++ : 0;
        }
        return cntSubstr;
    }
};

/*
"xyzzaz"
"aababcabc"
"a"
"adc"
"aab"
"as"
"aa"
*/
