/**
 * @file ransomNote.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/ransom-note/
 *
 */


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> map_ransomNote(26, 0), map_magazine(26, 0);
        for (char ch : ransomNote) map_ransomNote[ch-'a']++;
        for (char ch : magazine) map_magazine[ch-'a']++;
        for (int i = 0; i < 26; i++) {
            if (map_ransomNote[i] > map_magazine[i]) return false;
        }
        return true;
    }
};
