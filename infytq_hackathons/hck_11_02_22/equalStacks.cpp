/**
 * @file equalStacks.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/h-cs3c-feb11/challenges/equal-stacks
 * 
 */

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int sum1 = accumulate(h1.begin(), h1.end(), 0);
    int sum2 = accumulate(h2.begin(), h2.end(), 0);
    int sum3 = accumulate(h3.begin(), h3.end(), 0);
    
    while (!((sum1 == sum2) and (sum2 == sum3))) {
        int m = 0;
        (sum1 > sum2) ? (sum1 > sum3 ? m = sum1 : m = sum3 ) : (sum2 > sum3 ? m = sum2 : m = sum3);
        if (sum1 == m) {
            sum1 -= h1[0];
            h1.erase(h1.begin());
        } else if (sum2 == m) {
            sum2 -= h2[0];
            h2.erase(h2.begin());
        } else {
            sum3 -= h3[0];
            h3.erase(h3.begin());
        }
    }
    return sum1;
}