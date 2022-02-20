/**
 * @file jumpingOnTheClouds.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/jumping-on-the-clouds/
 * 
 */

int jumpingOnClouds(vector<int> c) {
    int n = 0;
    for (int i = 0; i < c.size()-1;) {
        if (c[i+2] == 0) {
            n++; i+=2;
        }
        else if(c[i+1] == 0) {
            n++; i++;
        }
        cout << i << " ";
    }
    return n;
}