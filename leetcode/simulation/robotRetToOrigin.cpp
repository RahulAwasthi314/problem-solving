/**
 * @file robotRetToOrigin.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/robot-return-to-origin/
 * 
 */

class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> fremap;
        for (char ch : moves) {
            fremap[ch]++;
        }
        auto l_it = fremap.find('L');
        auto r_it = fremap.find('R');
        auto u_it = fremap.find('U');
        auto d_it = fremap.find('D');

        bool a = false;
        bool b = false;
        if ((l_it != fremap.end() and r_it != fremap.end())
           and l_it->second == r_it->second) {
            a = true;
        } else if (l_it == fremap.end() and r_it == fremap.end()) {
            a = true;
        } else a = false;

        if (  (u_it != fremap.end() and d_it != fremap.end())
           and u_it->second == d_it->second) {
            b = true;
        } else if (u_it == fremap.end() and d_it == fremap.end()) {
            b = true;
        } else b = false;
        return (a and b);
    }
};

/*
"UD"
"LL"
"UUUU"
"UDUD"
"UUUUDDDD"
"ULDR"
"UDDULLRLRR"
"UURRLLDD"
"URLD"
*/