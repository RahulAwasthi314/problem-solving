/**
 * @file combinationSum3.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/combination-sum-iii/
 *
 */

class Solution {

    void bt(vector<int>& nums, int pos, int k, int target, vector<int>& currSol, vector<vector<int>>& allSol) {
        if (target == 0 and currSol.size() == k) {
            allSol.push_back(currSol);
            return;
        }
        if (nums.size() == pos) return;
        if (target < nums[pos]) return;
        bt(nums, pos+1, k, target, currSol, allSol);
        currSol.push_back(nums[pos]);
        bt(nums, pos+1, k, target-nums[pos], currSol, allSol);
        currSol.pop_back();
    }
    vector<vector<int>> wrapper_bt(int k, int n) {
        int target = n;
        vector<int> nums;
        for (int i = 1 ; i <= 9; ++i) nums.push_back(i);
        vector<int> currSol;
        vector<vector<int>> allSol;
        bt(nums, 0, k, target, currSol, allSol);
        return allSol;
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        return wrapper_bt(k, n);
    }
};


class Solution2 {

    void helper(vector<int>& currSol, vector<vector<int>>& allSol, int num, int& currSum, int n, int k) {
        if (currSol.size() == k and currSum == n) {
            allSol.push_back(currSol);
            return;
        }
        if (num == 10) return;
        if (currSum > n) return;

        currSum += num;
        currSol.push_back(num);
        helper(currSol, allSol, num+1, currSum, n, k);
        currSol.pop_back();
        currSum -= num;
        helper(currSol, allSol, num+1, currSum, n, k);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> currSol;
        vector<vector<int>> allSol;
        int currSum = 0;
        for (int i = 1; i < 10; i++) {
            currSum += i;
            currSol.push_back(i);
            helper(currSol, allSol, i+1, currSum, n, k);
            currSol.pop_back();
            currSum -= i;
        }
        return allSol;
    }
};
