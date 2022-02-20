/**
 * @file min_distances.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/minimum-distances/
 * 
 */

int minimumDistances(int a_count, int* a) {
    int maxx = INT_MAX;
    for (int i = 0; i < a_count; i++) {
        for (int j = 0; j < a_count; j++) {
            if ((i != j) && (a[i] == a[j]) && (abs(i - j) < maxx)) {
                maxx = abs(i - j);
            }
        }
    }
    if (maxx == INT_MAX) return -1;
    return maxx;
}