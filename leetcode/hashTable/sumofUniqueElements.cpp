/**
 * @file sumOfUniqueElements.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/sum-of-unique-elements/
 *
 */

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i : nums) {
            m[i]++;
        }
        int sum = 0;
        for (auto it : m) {
            if (it.second == 1)
            sum += it.first;
        }
        return sum;
    }
};
