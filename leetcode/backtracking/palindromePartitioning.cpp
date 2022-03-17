/**
 * @file palindromePartitioning.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/palindrome-partitioning/
 * 
 */

class Solution {
    
    bool isPalindrome(string s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) {
            if (s[i] != s[j]) return false;
        }
        return true;
    }
    
    void bt(string& s, int beg, int end, vector<string>& currSol, vector<vector<string>>& allSol) {
        if (beg == end) {
            allSol.push_back(currSol);
            return;
        }
        for (int i = beg; i < end; i++) {
            string temp = "";
            for (int j = beg; j <= i; j++) temp += s[j]; // for substring gen
            if (isPalindrome(temp)) {
                currSol.push_back(temp);
                bt(s, i+1, end, currSol, allSol);
                currSol.pop_back();
            }   
        }
    }
    
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> allSol;
        vector<string> currSol;
        bt(s, 0, s.size(), currSol, allSol);
        return allSol;
    }
};


/*
// piece of code to generate required substrings:
#include <iostream>
using namespace std;
int main() {
  string s = "ABCD";    // o/p : "A" "AB" "ABC" "ABCD"
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j <= i; j++) cout << s[j];
    cout <<endl;
  }
  return 0;
}
*/