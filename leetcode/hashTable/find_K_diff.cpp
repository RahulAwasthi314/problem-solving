/**
 * @file find_K_diff.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/k-diff-pairs-in-an-array/
 * 
 */

class Solution {

    hashMapMethod(vector<int>& nums, int k) {
        int ans = 0;
        assert(nums.size() > 0 && "Provide valid array");
        if (nums.size() == 0 or k < 0) return 0;
        unordered_map<int, int> hashMap;
        
        for (auto i : nums) hashMap[i]++;
        
        for (auto i : hashMap) {
            cout << i.first << " " << i.second << "\n";
        }
        
        for (auto i : hashMap) {
            if (k == 0 )
            {
                if (i.second >= 2) ans++;
            }   
            else if (hashMap.find(i.first+k)!=hashMap.end()) ans++;
        }
        return ans;
    }

public:
    int findPairs(vector<int>& nums, int k) {
        return hashMapMethod(nums, k);
    }
};