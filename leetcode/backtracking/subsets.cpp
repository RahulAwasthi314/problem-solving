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



// tail recursive appraoch by last idx access, by first idx access and head recursive approach
class Solution {
    
    void bt(vector<int> nums, int pos, vector<int>& currSol, vector<vector<int>>& allSol) {
        // leaf nodes are containing answer 
        // tail recursive approach
        // base case 
        if (pos == nums.size()) return;
        // what if we are on internal nodes of recursive tree
        // not include the current char in the solution space
        bt(nums, pos+1, currSol, allSol);
        // include the current char in the current solution space of backtracking
        currSol.push_back(nums[pos]);
        bt(nums, pos+1, currSol, allSol);
        // backtrack the current subset to generate another
        currSol.pop_back();
    }
    
    
    void bt2(vector<int> nums, int n, vector<int>& currSol, vector<vector<int>>& allSol) {
        // base case
        if (n == 0) {
            allSol.push_back(currSol);
            return;
        }
        // internal node of recursive states
        // without the current char
        bt2(nums, n-1, currSol, allSol);
        // make the solution space with by selecting the current character
        currSol.push_back(nums[n-1]);
        bt2(nums, n-1, currSol, allSol);
        // backtrack for more possiblities
        // how to backtrack? just pop the changes you have made
        currSol.pop_back();
    }
    
    // optimize approach than backtracking
    vector<vector<int>> headRecursive(vector<int>& nums, int n) {
        if (n == 0) {
            vector<int> nullset;
            vector<vector<int>> powerSet;
            powerSet.push_back(nullset);
            return powerSet;
        }
        auto subset1 = headRecursive(nums, n-1);
        auto subset2 = subset1;
        for (int i = 0; i < subset2.size(); i++) subset2[i].push_back(nums[n-1]);
        subset1.insert(subset1.end(), subset2.begin(), subset2.end());
        return subset1;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>> allSol;
        // vector<int> currSol;
        // bt(nums, 0, currSol, allSol);
        // bt2(nums, nums.size(), currSol, allSol);
        // return allSol;
        return headRecursive(nums, nums.size());
        
    }
};