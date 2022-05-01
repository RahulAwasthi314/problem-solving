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




class Solution {

    // time: O(n^3) space: O(1)
    int bruteforce1(vector<int>& nums, int k) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }
                if (sum == k) cnt++;
            }
        }
        return cnt;
    }

    // time: O(n^2) space: O(1)
    int bruteforce2(vector<int>& nums, int k) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum == k) cnt++;
            }
        }
        return cnt;
    }

    // preprocessing the input or in a way enhancing it to reduce the further operational req.
    // prefixSum Technique to find the subarray sum in O(1) time
    // time: O(n^2) space: O(n)
    int prefixSumMethod(vector<int>& nums, int k) {
        int cnt = 0, n = nums.size();
        vector<int> preSum(n, 0);

        preSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            preSum[i] = preSum[i-1] + nums[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = preSum[j] - ((i==0)? 0 : preSum[i-1]);
                if (sum == k) cnt++;
            }
        }
        return cnt;
    }

    // time: O(n) space: O(n)
    int hashTableMethod(vector<int>& nums, int k) {
        int cnt = 0, n = nums.size();
        int preSum = 0;
        unordered_map<int, int> hashTable; // <prefixSum, frequency>
        hashTable[0] = 1;

        for (int i = 0; i < n; i++) {
            preSum += nums[i];
            cnt += hashTable[preSum - k];
            hashTable[preSum]++;
        }
        return cnt;
    }



public:
    int subarraySum(vector<int>& nums, int k) {
        return hashTableMethod(nums, k);
        return prefixSumMethod(nums, k);
        return bruteforce2(nums, k);
        return bruteforce1(nums, k);
    }
};
