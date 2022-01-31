/**
 * @file markAndToys.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/mark-and-toys/
 * 
 */

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());
    int count = 0;
    int sum = 0;
    for (auto price : prices) {
        if (sum + price > k) return count;
        sum  += price;
        count++;
    }
    return count;
}