/**
 * @file savePrisoner.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/save-the-prisoner/
 * 
 */

int saveThePrisoner(int n, int m, int s) {
    return (s + m - 2)%n + 1;
}