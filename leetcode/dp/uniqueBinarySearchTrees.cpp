/**
 * @file uniqueBinarySearchTrees.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/unique-binary-search-trees/
 *
 */

class Solution {

    int numTreesRecursive(int n) {
        if (n == 1 or n == 0) return 1;
        int currTrees = 0, leftSubTree = 0, rightSubTree = 0;
        for (int i = 1; i <= n; i++) {
            // find the total subtrees in the left of the remaining nodes of ith node
            leftSubTree = numTrees(i-1);
            // i is the current root

            // count the total number if possible subtrees in the right of current ith node
            rightSubTree = numTrees(n-i);

            //multiply all the possiblities
            currTrees += leftSubTree * rightSubTree;
        }
        return currTrees;
    }


    int numTreeMem(int n, vector<int>& dp) {
        if (n == 0 or n == 1) return 1;
        if (dp[n] != 0) return dp[n];
        int left, right;
        long long sum = 0;
        for (int i = 1; i <= n; i++) {
            left = numTreeMem(i-1, dp);
            right = numTreeMem(n-i, dp);
            sum += left * right;
        }
        return sum;
    }

    int numTreesMemoize(int n) {
        vector<int> dp(n+1, 0);
        return numTreeMem(n, dp);
    }

    int numTreesTopDown(int n) {
        vector<int> dp(n+1, 0);
        dp[0] = 1; dp[1] = 1;
        for (int i =2; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                dp[i] += dp[j-1] * dp[i-j];
            }
        }
        return dp[n];
    }

public:
    int numTrees(int n) {
        return numTreesTopDown(n);
        return numTreesMemoize(n);
        return numTreesRecursive(n);
    }
};
