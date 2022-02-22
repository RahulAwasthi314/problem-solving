/**
 * @file excel_Sheet_numbers.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/excel-sheet-column-number/
 * 
 */

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0,x=0;
        for (int i = columnTitle.size()-1; i >= 0; i--) {
            ans += (pow(26, x) * (columnTitle[i] - 'A' +1));
            x++;
        }
        return ans;
    }
};