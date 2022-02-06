/**
 * @file removeDuplicatesSortedArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
 * 
 */

class Solution {
    freMapMethod(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freMap;
        for (auto num : nums) {
            freMap[num]++;
        }
        // for (auto i : freMap) {
        //     cout << i.first << " " << i.second << "\n";
        // }
        nums.erase(nums.begin(), nums.end());
        for (auto i : freMap) {
            if (i.second > 2) i.second = 2;
            while (i.second--) {
                nums.push_back(i.first);
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }


public:
    int removeDuplicates(vector<int>& nums) {
        return freMapMethod(nums);
    }
};