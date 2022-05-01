/**
 * @file contiguousSubArraySum.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/contiguous-array/
 *
 */


 class Solution {

     // time: O(n^3) space: O(n^2) {storage for length of each subarray}
     int bruteforce1(vector<int>& nums) {
         vector<int> len; int ans = 0, n = nums.size();
         for (int i = 0; i < n; i++) {
             for(int j = i; j < n; j++) {
                 int zeroes = 0, ones = 0;
                 for (int k = i; k <= j; k++) {
                     if (nums[k] == 0) zeroes++;
                     else ones++;
                 }
                 if (zeroes == ones) len.push_back(j - i + 1);
             }
         }
         for (int i = 0; i < len.size(); i++) {
             ans = max(len[i], ans);
         }
         return ans;
     }

     // time: O(n^3) space: O(1)
     int bruteforce2(vector<int>& nums) {
         int ans = 0, n = nums.size();
         for (int i = 0; i < n; i++) {
             for(int j = i; j < n; j++) {
                 int zeroes = 0, ones = 0;
                 for (int k = i; k <= j; k++) {
                     if (nums[k] == 0) zeroes++;
                     else ones++;
                 }
                 if (zeroes == ones) ans = max(j - i + 1, ans);
             }
         }
         return ans;
     }

     // time: O(n^2) space: O(1)
     int bruteforce3(vector<int>& nums) {
         int ans = 0, n = nums.size();
         for (int i = 0; i < n; i++) {
             int zeroes = 0, ones = 0;
             for(int j = i; j < n; j++) {
                 if (nums[j] == 0) zeroes++;
                 else ones++;
                 if (zeroes == ones) ans = max(j - i + 1, ans);
             }
         }
         return ans;
     }

     // time: O(n) space: O(n)
     int prefixSumHashtableMethod(vector<int>& nums) {
         int n = nums.size();
         // input enhancement 0 -> -1 {equiv oppsite sign other char}
         for (int& i : nums) {
             if (i == 0) i = -1;
         }

         // finding max length subarray having sum == 0
         // transforming the solution into previously solved
         // problem and building the solution on top of it
         unordered_map<int, int> visited;  // <subarraySum, earliest index>
         visited[0] = -1;
         int ans = 0;
         int pSum = 0;
         for (int i = 0; i < n; i++) {
             pSum += nums[i];
             if (visited.find(pSum) != visited.end()) { // find : O(1) amortized
                 ans = max(ans, i - visited[pSum]);
             } else {
                 visited[pSum] = j;
             }
         }
         return ans;
     }

 public:
     int findMaxLength(vector<int>& nums) {
         return prefixSumHashtableMethod(nums);
         return bruteforce3(nums);
         return bruteforce2(nums);
         return bruteforce1(nums);
     }
 };
