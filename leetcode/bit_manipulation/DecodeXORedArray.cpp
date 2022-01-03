/**
 * @file DecodeXORedArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://leetcode.com/problems/decode-xored-array/
 * 
 */

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int curr_val = first;
        
        for (int i = 0; i < encoded.size(); i++) {
            curr_val = ~(curr_val ^ (~encoded[i]));
            ans.push_back(curr_val);
        }
        return ans;
        
    }
};