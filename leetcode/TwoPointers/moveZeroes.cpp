/**
 * @file moveZeroes.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/move-zeroes/
 * 
 */

class Solution {
    void prakharsAlgo (vector<int>& nums) {
        int s=0;
        int e=s+1;
        while(e<nums.size())
        {
            if(nums[s]!=0) {
                s++;
                e++;
            }
            else if(nums[s]==0 && nums[e]!=0) {
                swap(nums[s],nums[e]);
                s++;
                e++;
            }
            else if(nums[s]==0 &&nums[e]==0) e++;
        }
    }
    
    void partitionLogic(vector<int>& nums) {
        int x = nums[nums.size()-1];
        int i = 0;
        for (int j  = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[nums.size()-1]);
    }
    
    void logic(vector<int>& nums) {
        int s = 0;
        int e = s+1;
        while (e < nums.size()) {
            if (nums[s] != 0)  {
                s++;
                e++;
            }
            else if ((nums[s] == 0) and (nums[e] == 0)) {
                e++;
            }
            else if ((nums[s] == 0) and (nums[e] != 0)) {
                swap(nums[s], nums[e]);
                s++; e++;
            }
        }
    }
    
public:
    void moveZeroes(vector<int>& nums) {
        logic(nums);
        // partitionLogic(nums);
        // prakharsAlgo(nums);
    }  
};


/*
[0,1,0,3,12]
[0,0,0,0,0,12]
[1,2,3,4,5,0,0,0,0]
[1]
[1,2]
[1,2,0]
[1,0,0]
[0,0,0]
*/