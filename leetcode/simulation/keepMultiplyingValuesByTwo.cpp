/**
 * @file keepMultiplyingValuesByTwo.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/keep-multiplying-found-values-by-two/
 * 
 */

class Solution {
    
    // bruteforce: remove the value i whose gcd(original, i) != original
    // return the highest value of the array * 2
    // if no element is remaining return original
    
public:
    int findFinalValue(vector<int>& nums, int original) {
        for (int i = 0; i < nums.size(); i++) {
            int flag = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == original) {
                    original *= 2;
                    flag = 1;
                }
            }
            if (flag == 0) break;
        }
        return original;
    }
};