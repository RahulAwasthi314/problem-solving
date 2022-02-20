/**
 * @file jumpingOnClouds.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited
 * 
 */

int jumpingOnClouds(vector<int> c, int k) {
    int n = c.size();
    int i = 0;
    int e = 100;
    do {
        i = (i + k) % n;
        if (c[i] == 1) e -= 2;
        e -= 1;
    } while (i != 0);
    return e;
}