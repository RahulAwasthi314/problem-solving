/**
 * @file intersectionOfTwoArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/intersection-of-two-arrays/
 * 
 */


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> fremap1;
        for (int num : nums1) fremap1[num]++;
        unordered_map<int, int> fremap2;
        for (int num : nums2) fremap2[num]++;
        
        for (auto it : fremap1) {
            auto it2 = fremap2.find(it.first);
            if (it2 != fremap2.end()) ans.push_back(it.first);
        }
        return ans;
    }
};