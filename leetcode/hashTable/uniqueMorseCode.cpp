/**
 * @file uniqueMorseCode.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/unique-morse-code-words/
 *
 */

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","...."
        ,"..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
        "..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> fremap;

        for (int i = 0; i < words.size(); i++) {
            string s;
            for (int j = 0; j < words[i].size(); j++) {
                s += morse[words[i][j] - 'a'];
            }
            fremap[s]++;
        }
        return fremap.size();
    }
};
