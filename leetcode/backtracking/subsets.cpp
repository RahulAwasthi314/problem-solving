/**
 * @file subsets.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/subsets/
 *
 */

#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> ans;

void sub_ordinate(vector<int>& temp, int pos, vector<int>& nums) {
  // base case
if (nums.size() == pos) {
  ans.push_back(temp);
  return;
}

  // inductive step
  sub_ordinate(temp, pos + 1, nums);
  // hypothesis step
  temp.push_back(nums[pos]);
  sub_ordinate(temp, pos + 1, nums);
  temp.pop_back();
  return;

}
vector<vector<int>> subsets(vector<int>& nums) {
  vector<int> temp;
  sub_ordinate(temp, 0, nums);
  return ans;
}

int main() {
  vector<int> nums;
  subsets(nums);
  for (auto i : ans) {
    for (auto j : i) {
      cout << j << " ";
    } cout << endl;
  }
  return 0;
}
