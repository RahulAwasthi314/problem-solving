/**
 * @file sumOfAllOddLenSubarray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
 *
 */

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i; j < arr.size(); j++) {
                int n = 0, s = 0;
                for (int k = i; k <= j; k++) {
                    n++;
                    s += arr[k];
                }
                if (n%2) sum += s;
            }
        }
        return sum;
    }
};
