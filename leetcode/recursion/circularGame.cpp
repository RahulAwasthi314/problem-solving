/**
 * @file circularGame.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/find-the-winner-of-the-circular-game/
 * 
 */

class Solution {
    // time: O(n) space: O(n) {stack space}
    int make_it_leave(vector<int>& a, int k, int pos) {
        // base step 
        if (a.size() == 1) return a[0];
        
        // hypothesis step
        // remove that index value
        pos = (pos + k - 1)%a.size();
        a.erase(a.begin() + pos);
        
        // inductive step
        return make_it_leave(a, k, pos);
    }
public:
    int findTheWinner(int n, int k) {
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) {
            a[i] = i+1;
        }
        return make_it_leave(a, k, 0);
    }
};