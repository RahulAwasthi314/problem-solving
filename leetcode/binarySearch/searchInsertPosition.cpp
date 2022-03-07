/**
 * @file searchInsertPosition.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/search-insert-position/
 * 
 */

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while (start < end) {
            int mid = start + (end - start)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) start = mid+1;
            else end = mid-1;
        }
        if (target <= nums[start]) return start;
        return start+1;
    }
};

/**
[1,3,5,6]
5
[1,3,5,6]
2
[1,3,5,6]
7
[1,2,3,4]
0
[1]
1
[1]
2
[0]
1
[2]
0
[1,2,3]
0
[1,4,6]
3
[1,4,6]
5
[1,4,6]
7
[1,4,7]
9
*/