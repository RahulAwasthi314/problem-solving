/**
 * @file hurdelRace.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/the-hurdle-race/
 * 
 */

int hurdleRace(int k, vector<int> height) {
    int maxx = -1;
    int minn = INT_MAX;
    for (auto i : height) {
        maxx = max(maxx, i);
        
    }
    return maxx - k >= 0 ? maxx - k: 0;
}
