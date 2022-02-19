/**
 * @file angryProfessor.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief
 * try out the problem here:
 * https://www.hackerrank.com/challenges/angry-professor/ 
 * 
 */

string angryProfessor(int k, vector<int> a) {
    int count = 0;
    for (auto i : a) if (i <= 0) count++;
    if (count >= k) return "NO";
    return "YES";
}