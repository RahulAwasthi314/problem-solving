/**
 * @file baseballgame.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/baseball-game/
 */

class Solution {
    vector<int> ans;
public:
    int calPoints(vector<string>& ops) {
        for (int i = 0; i < ops.size(); i++) {
            // ops[i] : +
            if (ops[i] == "+")
            {
                int n = ans.size();
                int firstVal = ans[n-1], secVal = ans[n-2];
                ans.push_back(firstVal+secVal);
            }
            // ops[i] : "D"
            else if (ops[i] == "D") {
                int n = ans.size();
                int firstVal = ans[n-1];
                ans.push_back(firstVal * 2);
            }
            // ops[i] : "C"
            else if (ops[i] == "C") ans.pop_back();
            // ops[i] : integer
            else
            {
                ans.push_back(stoi(ops[i]));
            }
        }
        return accumulate(ans.begin(), ans.end(), 0);
        // return 0;
    }
};

/*
["1","2"]
["1","-2","-3","-4"]
["1","-2","+","-3","+","-4","+"]

*/
