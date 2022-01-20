/**
 * @file kthLargestElement.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/kth-largest-element-in-an-array/
 * 
 */

class Solution {
private:
    // problem statement:
    // return the elemen from a group of elements where there exist whose number is kth,
    //  after keeping the elements in the sorted order.
    
    // Based on problem description
    // Sort the array in non-decreasing order and pick the k th position element from the array
    // Time Complexity: O(n log n)      Space Complexity: O(1)
    int bruteForce(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
    
    
    
    // priority queue approach
    // without modifying input array
    // taking some extra space and reducing the current time complexity


public:
    int findKthLargest(vector<int>& nums, int k) {
        return bruteForce(nums, k);
    }
};