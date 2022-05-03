/**
 * @file permutaionInString.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/permutation-in-string/
 *
 */

class Solution {

    bool bruteforce0(streing& s1, string& s2) {
      // O(n! * n2)
      // for each permutation of s1:
          // if (each_perm == s2) return true
        // return False
    }

    bool bruteforce(string& s1, string& s2) {
        sort(s1.begin(), s1.end());
        for (int i = 0, j = s1.size(); j <= s2.size(); i++, j++) {
            string ss;
            for (int a = i; a < j; a++) {
                ss += s2[a];
            }
            sort(ss.begin(), ss.end());
            if (ss == s1) return true;
        }
        return false;
    }

public:
    bool checkInclusion(string s1, string s2) {
        return bruteforce(s1, s2);
    }
};
/*
"ab"
"eidbaooo"
"ab"
"eidboaoo"
"hello"
"ooolleoooleh"
"intention"
"execution"
"asdfafafaefafadf"
"asdfa"
"adc"
"dcda"
*/
