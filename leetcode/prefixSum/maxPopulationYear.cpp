/**
 * @file maxPopulationYear.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/maximum-population-year/
 *
 */

class Solution {
  // n: number of persons,  m: diffrence of death and birth year
  // time: O(n*m) space: O(n*m)
    int bf_unordered_map_approach(vector<vector<int>>& logs) {
        map<int, int> y_p_map;
        for (int i = 0; i < logs.size(); i++) {
            for (int j = logs[i][0]; j < logs[i][1]; j++) {
                y_p_map[j]++;
            }
        }
        int max_pop = 0;
        int max_year = 0;
        for (auto& it : y_p_map) {
            if (it.second > max_pop) {
                max_pop = it.second;
                max_year = it.first;
            }
        }
        return max_year;
    }

    // time: O(n logn) space: O(n)
    int prefixSumDesign(vector<vector<int>>& logs) {
        map<int, int> y_map;
        for (int i = 0; i < logs.size(); i++) {
            y_map[logs[i][0]]++;
            y_map[logs[i][1]]--;
        }
        // calculate prefixSum
        int prefixSum = 0;
        for (auto& it : y_map) {
            prefixSum += it.second;
            it.second = prefixSum;
        }
        int max_pop = 0;
        int max_year = 0;
        for (auto& it : y_map) {
            if (it.second > max_pop) {
                max_pop = it.second;
                max_year = it.first;
            }
        }
        return max_year;
    }

public:
    int maximumPopulation(vector<vector<int>>& logs) {
        return prefixSumDesign(logs);
    }
};
