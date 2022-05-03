/**
 * @file sortedUnsortedContinuousSubarray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
 *
 */

class Solution {

        int bruteforce(vector<int>& nums) {
                vector<int> arr = nums;
                sort(arr.begin(), arr.end());
                int n = nums.size();
                int i = 0, j = n-1;
                while (i < j) {
                        if (arr[i] == nums[i]) i++;
                        if (arr[j] == nums[j]) j--;
                        if (arr[i] != nums[i] and arr[j] != nums[j]) {
                                break;
                        }
                }
                if (i == j) return 0;
                return j - i + 1;
        }
public:
    int findUnsortedSubarray(vector<int>& nums) {
            return bruteforce(nums);

    }
};
