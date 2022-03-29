/**
 * @file carPooling.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/car-pooling/
 *
 */
class Solution {
    // time: O(n*m)     space: O(max(dest) - min(src))
    bool bf(vector<vector<int>>& trips, int capacity) {
        int arr[1001] = {0};
        for (int i = 0; i < trips.size(); i++) {
            for (int j = trips[i][1]; j < trips[i][2]; j++) {
                arr[j] += trips[i][0];
            }
        }
        for (int i = 0; i < 1001; i++) {
            if (arr[i] > capacity) return false;
        }
        return true;
    }

    // time: O(n)       space: O(n)
    bool prefixSum(vector<vector<int>> trips, int capacity) {
        int arr[1001] = {0};
        for (int i = 0; i < trips.size(); i++) {
            arr[trips[i][1]] += trips[i][0];
            arr[trips[i][2]] -= trips[i][0];
        }
        int prefixSum = 0;
        for (int i = 0; i < 1001; i++) {
            prefixSum += arr[i];
            arr[i] = prefixSum;
            if (arr[i] > capacity) return false;
        }
        return true;
    }
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        return prefixSum(trips, capacity);
        return bf(trips, capacity);

    }
};
