/**
 * @file contiguousSubArraySum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/partition-array-into-disjoint-intervals
 *
 */


class Solution {

    // time: O(n^3) space: O(1)
    int bruteforce1(vector<int>& nums) {
        int n = nums.size();
        int size = 0;
        for (size = 1; size < n-1; size++) {
            bool flag = true;
            for (int i = 0; i < size; i++) {
                for (int j = n-1; j >= size; j--) {
                    if (nums[i] > nums[j]) flag = false;
                }
            }
            if (flag) return size;
        }

        return 0;
    }

    // just compare max(left) and min(right)
    // improving the efficiency of above bruteofce1
    // time: O(n^2) space: O(1)
    int bruteforce2(vector<int>& nums) {
        int n = nums.size();
        int size = 0;
        for (size = 1; size < n-1; size++) {
            bool flag = true;
            int prefixMax = INT_MIN;
            for (int i = 0; i < size; i++) {
                prefixMax = max(prefixMax, nums[i]);
            }
            int suffixMin = INT_MAX;
            for (int j = size; j < n; j++) {
                suffixMin = min(suffixMin, nums[j]);
            }
            if (prefixMax <= suffixMin) return size;
        }
        return 0;
    }

    // improving the glaring inefficiencies of the method
    // finding max in each iteration of size
    // using prefixMax and suffixMin array to utilize further to reduce time complexity of sol.
    int prefixMax_suffixMinStoringMethod(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixMax(n);
        prefixMax[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(nums[i], prefixMax[i-1]);
        }
        vector<int> suffixMin(n);
        suffixMin[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            suffixMin[i] = min(nums[i], suffixMin[i+1]);
        }

        for (int i = 1; i < n; i++) {
            if (prefixMax[i-1] <= suffixMin[i]) return i;
        }
        return 0;
    }

public:
    int partitionDisjoint(vector<int>& nums) {
        return prefixMax_suffixMinStoringMethod(nums);
        return bruteforce2(nums);
        return bruteforce1(nums);
    }
};
