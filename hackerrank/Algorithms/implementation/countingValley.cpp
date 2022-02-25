/**
 * @file countingValley.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/counting-valleys/
 * 
 */

int countingValleys(int steps, string path) {
    int valley = 0;
    int c_sea = 0;
    for (char p : path) {
        if (p == 'U') c_sea++;
        if (p == 'D') c_sea--;
        if (c_sea == 0 and p == 'U') valley++;
    }
    return valley;
}