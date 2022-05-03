/**
 * @file grumpyBookStoreOwner.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/grumpy-bookstore-owner/
 *
 */

class Solution {

    int calcGrumpiness(int st, int end, vector<int>& customers, vector<int>& grumpy) {
        int grumpiness = 0;
        for (int i = st; i < end; i++) {
            if (grumpy[i]) {
                grumpiness += customers[i];
            }
        }
        return grumpiness;
    }

    // time: O(n * minutes) space: O(1)
    int bruteforce(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int notGrumpyValues = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                notGrumpyValues += customers[i];
            }
        }

        int maxGrumpiness = INT_MIN;
        for (int i = 0, j = i + minutes; j <= customers.size(); i++, j++) {
            // window is [i, j)
            int currGrumpiness = calcGrumpiness(i, j, customers, grumpy);
            if (currGrumpiness > maxGrumpiness) {
                maxGrumpiness = currGrumpiness;
            }
        }
        return notGrumpyValues + maxGrumpiness;
    }

public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        return bruteforce(customers, grumpy, minutes);
    }
};
