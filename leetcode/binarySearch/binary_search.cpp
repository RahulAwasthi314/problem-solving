/**
 * @file binary_search.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/binary-search/
 * 
 */

class Solution {
// time: O(log n) space: O(1)
// iterative solution
int binary_search(vector<int>& arr, int key) {
	int start = 0;
	int end = arr.size() - 1;
	while(start <= end) {
        int mid = (start + end)/2;

        if(key == arr[mid]) {
            return mid;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
	}
	return -1;
}

    // recursive solution
    // time: O(log n) space: O(log n)
    int binary_search(vector<int>& arr, int key, int start, int end) {
        // base case 
        if (start > end) return -1;
        
        // hypothesis case
        int mid = (start + end)/2;
        if (arr[mid] == key) return mid;
        
        // inductive case
        if (arr[mid] > key) return binary_search(arr, key, start, mid-1);
        else return binary_search(arr, key, mid+1, end);
        
    }

public:
    int search(vector<int>& nums, int target) {
        return binary_search(nums, target, 0, nums.size()-1);
        return binary_search(nums, target);
    }
};