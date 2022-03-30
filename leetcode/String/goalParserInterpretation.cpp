/**
 * @file goalParserInterpretation.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/goal-parser-interpretation/
 *
 */

 class Solution {
 public:
     string interpret(string command) {
         string ans;
         for (int i = 0; i < command.size(); i++) {
             if (command[i] == 'G') ans += 'G';
             if (command[i] == '(') {
                 if (command[i+1] == 'a') {
                     ans += "al";
                     i+=2;
                 }
                 else if (command[i+1] == ')') {
                     ans += "o";
                     i++;
                 }
             }
         }
         return ans;

     }
 };
