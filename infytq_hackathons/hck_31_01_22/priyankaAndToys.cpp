/**
 * @file priyankaAndToys.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem link:
 * https://www.hackerrank.com/contests/infytq-jan31-cs3c/challenges/priyanka-and-toys/
 */

int toys(vector<int> w) {
    sort(w.begin(), w.end());
    int temp_w = w[0];
    int count = 1;
    for (int i = 1; i < w.size(); i++) {
       if (w[i] > temp_w + 4) {
           temp_w = w[i];
           count++;
           cout << temp_w << " " << w[i] << "\n";
       }
   }
    return count;
}