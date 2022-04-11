/**
 * @file checkIfWordsEqualSummationOfTwoWords.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
 *
 */

class Solution {

    // O(n)     n: number of characters in string
    int findScore(string& word) {
        int score = 0;
        for (char ch : word) {
            score = score * 10 + ch-'a';
        }
        return score;
    }
    // O(n) + O(m) + O(m+n) = O(m+n)    m: size of firstWord, n: size of secondWord
    bool byFindingSum(string& firstWord, string& secondWord, string& targetWord) {
        return (findScore(firstWord) + findScore(secondWord)) == findScore(targetWord);
    }

public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return byFindingSum(firstWord, secondWord, targetWord);
    }
};
