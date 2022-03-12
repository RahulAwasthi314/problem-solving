/**
 * @file countMatchesInTournament.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://leetcode.com/problems/count-of-matches-in-tournament/
 * 
 */


class Solution { 
    void f(int n, int& s) {
        if (n == 1) return;
        if (n > 1) {
            cout << n << " ";
            if (n%2 == 0) {
                n /= 2;
                s += n;
                f(n, s);
            } else {
                s += (n-1)/2;
                n = ((n-1)/2) +1;
                f(n, s);
            }
            return;
        }
    }
public:
    int numberOfMatches(int n) {
        int s = 0;
        f(n, s);
        return s;
    }
};

/*
1
2
3
4
5
100
101
131
200
137
*/