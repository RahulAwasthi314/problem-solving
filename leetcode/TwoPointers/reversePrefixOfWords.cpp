/**
 * @file reversePrefixOfWords.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/reverse-prefix-of-word/
 *
 */

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int endIdx = 0;
            while (endIdx < word.size() and word[endIdx] != ch) {
                    endIdx++;
            }
            if (endIdx == word.size()) return word;
            for (int i = 0, j = endIdx; i < j; i++, j--) {
                    word[i] ^= word[j];
                    word[j] ^= word[i];
                    word[i] ^= word[j];
            }
            return word;
    }
};
