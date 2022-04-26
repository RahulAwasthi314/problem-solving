/**
 * @file findTheTownJudge.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 *
 * @brief
 * try out the problem here:
 * https://leetcode.com/problems/find-the-town-judge/
 *
 */



class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n + 1, 0);
        vector<int> outdegree(n + 1, 0);

        for (auto ent : trust) {
            outdegree[ent[0]]++;
            indegree[ent[1]]++;
        }
        /*
        for (auto i  : indegree) {
            cout << i << " ";
        } cout << endl;
        for (auto i : outdegree) {
            cout << i << " ";
        }
        */
        for (int i = 1; i <= n; i++) {
            if (indegree[i] == n - 1 and outdegree[i] == 0) {
                return i;
            }
        }
        return -1;
    }

};
