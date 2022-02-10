/**
 * @file subArraySumEqualK.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/subarray-sum-equals-k/
 */


class Solution {
private:
    // bruteForce approach to generate all possible subarrays
    // sum the elements from i to j and check for k
    // 
    // For each subarray in the power set of elements if subarray sum == k then count it.
    // Time : O(n^3) Space : O(1)
    int bruteForce(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        // because nums.size() is 
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                // i, j are represent the subarray
                int sum = 0;
                for (int k = 0; k <= j; k++) {
                    sum += nums[k];
                }
                if (sum == k) count++;
            }
        }
        return count;
    }

    // Time : O(n^2) Space : O(1)
    int bruteForce2(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        // because nums.size() is 
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                // i, j are represent the subarray
                sum += nums[j];
                if (sum == k) count++;
            }
        }
        return count;
    }
    
    // Time : O(n^2) Space : O(n)
    int prefixSum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> ps;
        ps[0] = nums[0];

        for (int i = 1; i < n; i++) {
            ps[i] = ps[i-1] + nums[i];
        }
        // because nums.size() is 
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                // i, j are represent the subarray
                sum = ps[j] - ((i == 0) ? 0 : ps[i-1]);
                if (sum == k) count++;
            }
        }
        return count;
    }
    // time: O(n)   space: O(n)
    int hashTableMethod(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int psum = 0;
        unordered_map<int, int> visited; // <val visited, frequency>
        visited[0] = 1;
        
        for (int i = 0; i < n; i++) {
            psum += nums[i];
            count += visited[psum - k];
            visited[psum]++;
        }
        return count;
    }
    

public:
    int subarraySum(vector<int>& nums, int k) {
        return bruteForce2(nums, k);
        return bruteForce(nums, k);
    }
};