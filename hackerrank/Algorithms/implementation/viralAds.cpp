/**
 * @file viralAds.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/strange-advertising
 * 
 */

int viralAdvertising(int n) {
    int res = 0;
    int x = 5;
    for (int i = 1; i <= n; i++) {
        int liked = (x / 2);
        x = liked * 3;
        res += liked;
    }
    return res;
}