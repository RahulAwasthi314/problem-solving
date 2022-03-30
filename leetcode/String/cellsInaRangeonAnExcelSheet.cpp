/**
 * @file cellsInRangeonAnExcelSheet.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/
 *
 */


class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> vec;
        char num_beg = s[1], num_end = s[4];
        char char_beg = s[0], char_end = s[3];
        for (char j = char_beg; j <= char_end; j++) {
            for (char i = num_beg; i <= num_end; i++) {
                string s;
                s += j;
                s += i;
                vec.push_back(s);
            }
        }
        return vec;

    }
};
