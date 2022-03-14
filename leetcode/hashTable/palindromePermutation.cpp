/**
 * @file palindromePermutation.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/palindrome-permutation/
 */

class Solution {

    isPalindrome(string& s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) {
            if (s[i] != s[j]) return false;
        }
        return true;
    }
    // time: O(n*n!)
    void bf(string& s) {
        // for each permutation of s    O(n!)
        // if it is palindrome          O(n)
        // return true;
        
        // generate all permutations
         
    }

    // time: O(n)   space: O(n)
    bool hashTableMethod(string& s) {
        unordered_map<char, int> fremap;
        for (char ch: s) fremap[ch]++;
        int oddCount = 0;
        for (auto it : fremap) {
            if (it.second%2) oddCount++;
        }
        return oddCount <=1;
    }

public:
    bool canPermutePalindrome(string &s) {
        return hashTableMethod(s);
    }
};