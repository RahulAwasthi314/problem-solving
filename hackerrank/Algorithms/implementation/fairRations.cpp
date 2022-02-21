/**
 * @file fairRations.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/fair-rations/
 * 
 */

string fairRations(vector<int> B) {
    int count = 0;
    int n = B.size();
    for (int i = 0; i < n-1; i++) if (B[i]%2) {B[i]++; B[i+1]++; count++;}
    int even = 0;
    for (int i = 0; i < n; i++) if (B[i]%2 == 0) even++;
    return (n == even) ? to_string(count * 2) : "NO";
}