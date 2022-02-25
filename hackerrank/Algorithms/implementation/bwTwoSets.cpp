/**
 * @file bwTwoSets.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/between-two-sets/
 * 
 */


bool is_factor_of_a(int n, vector<int>& a) {
    for (int i : a) 
        if (n % i == 0) continue;
        else return false;
    return true;
}

bool is_factor_of_b(int n, vector<int>& b) {
    for (int i : b) 
        if (i % n == 0) continue;
        else return false;
    return true;
}

int getTotalX(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int count = 0;
    for (int i = *(a.rbegin()); i <= b[0]; i++) {
        if (is_factor_of_a(i, a) and is_factor_of_b(i, b)) {
            count++;
        }
    }
    return count;

}