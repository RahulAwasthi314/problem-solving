/**
 * @file salaryExcludingMinMax.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
 * 
 */

class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        int size = salary.size();
        int maxx = INT_MIN;
        int minn = INT_MAX;
        for (int i = 0; i < size; ++i) {
            sum += salary[i];
            maxx = max(maxx, salary[i]);
            minn = min(minn, salary[i]);
        }
        return (sum-(maxx + minn)) / (size-2);
    }
};