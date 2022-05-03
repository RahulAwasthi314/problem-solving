/**
 * @file findAllAnagramsInStr.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/find-all-anagrams-in-a-string/
 *
 */

class Solution {

    bool isAnagram(string& s, string &p) {
        sort(s.begin(), s.end());
        for (int i = 0; i < p.size(); i++) {
            if (s[i] != p[i]) return false;
        }
        return true;
    }

    vector<int> bruteforce(string& s, string& p) {
        sort(p.begin(), p.end());
        vector<int> ans;
        for (int i = 0, j = p.size()-1; j < s.size(); ++i and ++j) {
            string ss = "";
            for (int a = i; a <= j; a++) {
                ss += s[a];
            }
            // cout << ss << " " << i << " " << j << "\n";
            if (isAnagram(ss, p)) {
                ans.push_back(i);
            }
        }
        return ans;
    }

public:
    vector<int> findAnagrams(string s, string p) {
        return bruteforce(s, p);
    }
};
