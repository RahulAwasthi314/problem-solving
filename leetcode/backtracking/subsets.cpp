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

void backtrack(vector<int>& temp, int pos, vector<int>& nums) {
  // base case
if (nums.size() == pos) {
  ans.push_back(temp);
  return;
}

  // inductive step
  backtrack(temp, pos + 1, nums);
  // hypothesis step
  temp.push_back(nums[pos]);
  backtrack(temp, pos + 1, nums);
  temp.pop_back();
  return;

}

vector<vector<int>> head_recursive(vector<vector<int>>& nums, int n) {
  if (n == 0) {
    vector<vector<int>> powerset;
    vector<int> nullset;
    powerset.push_back(nullset);
    return powerset;
  }
  
  vector<vector<int>> s1 = head_recursive(nums, n-1);

  vector<vector<int>> s2 = s1;

  for(int i = 0; i < s2.size(); i++) {
    s2[i].push_back(nums[n-1]);
  }
  
  for (auto i : s2) {
    cout << " [ ";
    for (auto j : i) cout << j << " ";
    cout << "] ";
  }

  s1.insert(s1.end(), s2.begin(), s2.end());
  return s1;

}

vector<vector<int>> bottom_up(vector<int>& nums, int n) {
  vector<vector<int>> powerset;
  vector<int> subset;
  powerset.push_back(subset);
  // for (int size = 1; size <= n; ++size)
  for (int i = 0; i < n; ++i) {
      int size = powerset.size();
      for (int j = 0; j < size; ++j) {
          vector<int> newsubset = powerset[j];
          newsubset.push_back(nums[i]);
          powerset.push_back(newsubset);
      }
  }
  return powerset;
}


vector<vector<int>> subsets(vector<int>& nums) {
  vector<int> temp;
  backtrack(temp, 0, nums);
  return ans;

  // head recursive approach
  return head_recursive(nums, nums.size());
  return 
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
