/**
 * @file containsDuplicate.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/contains-duplicate
 */


class Solution {
private:
    
    // problem statement: if there is a pair of element exist in the array such that nums[i] == nums[j]; for 0 <= i, j < n
    
    // bruteforce approach: get through problem description
    // exhaustive, simulation of description
    // iterating through O(n^2) pairs to check the repeatition
    
    // Time Complexity: O(n^2)      Space Complexity: O(1)
    bool bruteforce(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j and nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
    
    
    
    // improving the solution: preprocessing the input
    // input enhancement
    // presorting: format the input data such that it will help us to reduce the time complexity of existing bruteforce approach
    
    // sorting the input data to get the desired output by consuming less time (then bruteforce)
    
    // Time Complexity: O(n*log n) + O(n)      Space Complexity: O(1)
    bool presorting(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] == nums[i]) {
                return true;
            }
        }
        return false;
    }
    
    // counting the frequency for further refining the input and reducing the time complexity.
    // Time complexity : O(n) + O(k)    n : nums present in the array
    // Space Complexity : O(k)          k : distinct elements present in array
    bool setOfElements(vector<int>& nums) {
        map<int, int> freMap;                       // freMap to count frequency of elements
        for (int i = 0; i < nums.size(); i++) {
            freMap[nums[i]]++;
        }
        // check in the freMap if there is any element who have frequency > 1;
        for (auto& i : freMap) {
            if (i.second > 1) {
                return true;
            }
        }
        return false;
    }
    
public:
    bool containsDuplicate(vector<int>& nums) {
        return setOfElements(nums);
        return presorting(nums);
        return bruteforce(nums);
    }
};