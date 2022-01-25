/**
 * @file majority_element.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 *  https://leetcode.com/problems/majority-element/
 */

class Solution {

private:
    // brute force (mapMethod):
    // time : O(n), space : O(distinct chars)
    // for each distinct number in the set 
    //      if fre[char] > n / 2 
    //          return count
    int bruteForce(vector<int>& nums) {
        // hash table implementation in the cpp
        unordered_map<int, int> freMap;
            for (int i = 0; i < nums.size(); i++) {     // O(n)
                freMap[nums[i]]++;
            }
            for (auto& i : freMap) {                    // O(distinct numbers) 
                if (i.second > nums.size() / 2) {
                    return i.first;
                }
            }
            return -1;
        }
    }


    // preSorting: mutable elements required
    // Time : O(n* log n) Space: (1)
    // because atleast one element is there more than n / 2 times
    // then sort the array and return the mid element;

    // sort the elements 
    // time : O(n*log n) + O(n)   space : O()
    // return the element from n / 2 th position
    int preSorting(vector<int> nums) {
        // sort the input array
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }

public:
    int majorityElement(vector<int>& nums) {
        return bruteForce(nums);
    }
};