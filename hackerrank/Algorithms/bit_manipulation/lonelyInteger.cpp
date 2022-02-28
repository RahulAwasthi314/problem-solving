/**
 * @file lonelyInteger.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/lonely-integer/
 */

int lonelyinteger(vector<int> a) {
    int num = 0;
    for (auto i : a) {
        num ^= i;
    }
    return num;
}
