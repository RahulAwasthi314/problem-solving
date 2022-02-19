/**
 * @file electronicShop.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/electronics-shop/
 * 
 */

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int macs = -1;
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());
    for (auto i : keyboards) {
        for (auto j : drives) {
            if ((i + j > macs) and (i + j <= b) ) {
                macs = i + j;
            }
        }
    }
    return macs;
}
// try further approach for two pointer...