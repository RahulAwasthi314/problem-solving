/**
 * @file larry_array.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out problem here:
 * https://www.hackerrank.com/challenges/larrys-array/
 */


string larrysArray(vector<int> A) {
    int sum = 0;
    for (int i = 0; i < A.size(); i++) {
        int count = 0;
        for (int j = i+1; j < A.size(); j++) {
            if (A[i] > A[j]) count++;
        }
        sum += count;
    }
    if (sum % 2 == 0) return "YES";
    return "NO";
}