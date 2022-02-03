/**
 * @file billDivision.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/bon-appetit/
 * 
 */


void bonAppetit(vector<int> bill, int k, int b) {
    int actual = 0;
    for (int i = 0; i < bill.size(); i++) {
        if (i != k) actual += bill[i];
    }
    if (actual/2 == b) cout << "Bon Appetit\n";
    else cout << b - (actual / 2) << endl;
    return;
}