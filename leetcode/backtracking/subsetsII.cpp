class Solution {
    set<int> visited;
    
    void backtrack(vector<int>& nums, int n, vector<int>& currSubset, vector<vector<int>>& allSubsets) {
        if (n == 0) {
            allSubsets.push_back(currSubset);
            return;
        }
        
        // branch for no duplicate values
        if (visited.find(nums[n-1]) == visited.end()) {
            backtrack(nums, n-1, currSubset, allSubsets);
        }
        currSubset.push_back(nums[n-1]);
        visited.insert(nums[n-1]);
        backtrack(nums, n-1, currSubset, allSubsets);
        visited.erase(nums[n-1]);
        currSubset.pop_back();  
        
        
        return;
    }


    void backtrack2(vector<int>& nums, int n, vector<int>& currSubset, vector<vector<int>>& allSubsets) {
        if (n < 0) {
            cout << n << " ";
            allSubsets.push_back(currSubset);
            return;
        }
        // branch for no duplicate values
        int k = 1;
        while (n-k > 1 and (nums[n] == nums[n+k])) k--;
        backtrack2(nums, n-k, currSubset, allSubsets);
        currSubset.push_back(nums[n]);
        backtrack2(nums, n-1, currSubset, allSubsets);
        currSubset.pop_back();
    }
    

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> currSubset;
        backtrack(nums, nums.size()-1, currSubset, allSubsets);
        return allSubsets;
    }
};


class Solution2 {
    void backtrack2(vector<int>& nums, int pos, vector<int>& currSubset, vector<vector<int>>& allSubsets) {
        if (pos == nums.size()) {
            allSubsets.push_back(currSubset);
            return;
        }
        // branch for no duplicate values
        int k = 1;
        while (pos+k < nums.size() and (nums[pos] == nums[pos+k])) ++k;
        backtrack2(nums, pos+k, currSubset, allSubsets);
        currSubset.push_back(nums[pos]);
        backtrack2(nums, pos+1, currSubset, allSubsets);
        currSubset.pop_back();
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> currSubset;
        sort(nums.begin(), nums.end());
        backtrack2(nums, 0, currSubset, allSubsets);
        return allSubsets;
    }
};