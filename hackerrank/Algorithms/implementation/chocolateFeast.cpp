/**
 * @file chocolateFeast.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/chocolate-feast/
 * 
 */

int chocolateFeast(int rupees, int cost, int min_Wrapper) {
    int currWrapper = rupees / cost;
    int count = currWrapper;
    cout << count << " ";
    while (currWrapper >= min_Wrapper) {
        int temp = currWrapper % min_Wrapper;
        currWrapper /= min_Wrapper;
        count += currWrapper;
        currWrapper += temp;
        cout << count << " ";
    }
    return count;

}