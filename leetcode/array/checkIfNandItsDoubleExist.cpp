/**
 * @file checkIfNandItsDoubleExist.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
 *
 */

class Solution {

    // time: O(n)
    bool bruteforce(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j and arr[i]* 2 == arr[j]) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool checkIfExist(vector<int>& arr) {
        return bruteforce(arr);
    }
};
