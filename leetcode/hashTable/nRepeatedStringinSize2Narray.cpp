/**
 * @file nRepeatedStringinSize2Narray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * try out the problem here:
 * https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
 *
 */

class Solution {
    // hashmap method
    int hashmap(vector<int>& nums) {
        map<int, int> m;
        for (int i : nums) {
            m[i]++;
        }
        for (auto it : m) {
            if (it.second > 1) return it.first;
        }
        return -1;
    }

public:
    int repeatedNTimes(vector<int>& nums) {
        return hashmap(nums);
    }
};
