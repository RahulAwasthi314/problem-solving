/**
 * @file squareofSortedArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/squares-of-a-sorted-array/
 * 
 */

class Solution {
    
    vector<int> twoPointers(vector<int>& nums) {
        vector<int> ans;
        int k = 0;
        while (nums[k] < 0) {
            k++;
        }
        // k will be on the first positive number
        cout << k;
        int i = k-1; 
        int j = k;
        
        int size = nums.size();
        while (i >= 0 and j < size) {
            // calculate nums[i]^2 and nums[j]^2 and push the smaller one in the ans
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];
            if (a < b) {
                ans.push_back(a);
                i--;
            }
            else {
                ans.push_back(b);
                j++;
            }
        }
        while (i >= 0) {
            ans.push_back(nums[i]*nums[i]);
            i--;
        }
        while (j < size) {
            ans.push_back(nums[j]*nums[j]);
            j++;
        }
        return ans;
    }
    
    vector<int> bruteforce(vector<int>& nums) {
        for (int& i : nums) i *= i;
        sort(nums.begin(), nums.end());
        return nums;
    }
    
    
public:
    vector<int> sortedSquares(vector<int>& nums) {
        return bruteforce(nums);
    }
};