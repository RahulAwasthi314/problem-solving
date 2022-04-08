/**
 * @file removeElement.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the probleme here:

 *
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0, j = nums.size()-1; i < j;) {
            if (nums[i] == val and nums[j] == val) {
                j--;
            } else if (nums[i] != val and nums[j] != val) {
                i++;
            } else if (nums[i] == val and nums[j] != val) {
                swap(nums[i], nums[j]);
                i++; j--;
            } else {
                i++; j--;
            }
        }
        int i = 0;
        for (; i < nums.size(); i++) {
            if (nums[i] == val) {
                break;
            }
        }
        return i;
    }

    int removeElement2(vector<int>& nums, int val) {
        int i = 0, j = nums.size()-1;
        while (i < j) {
            if (nums[i] == val and nums[j] == val) {
                j--;
            } else if (nums[i] != val and nums[j] == val) {
                i++; j--;
            } else if (nums[i] == val and nums[j] != val) {
                swap(nums[i], nums[j]);
                i++; j--;
            } else {
                i++;
            }
        }
        return j+1;
    }
};

/*

[3,2,2,3]
3
[0,1,2,2,3,0,4,2]
2
[1,2,3,4,3,2,1,0]
1
[1,2,2,2,2,2,2,2,2,2]
2
[1,2,1,2,1,2,2,1,2,1,12]
2
[1,2,1,2,1,2,2,1,2,1,12]
1
[]
1
[1,1,1,1,1,1,1,1]
1
[1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2]
2
[1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2]
1
[1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2]
3
*/
