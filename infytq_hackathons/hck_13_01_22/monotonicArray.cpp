/**
 * @file monotonicArray.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * problem statement:-
 * Check if an Array can be Sorted by picking only the corner Array elements
 * 
 * Given an array arr[] consisting of N elements, 
 * the task is to check if the given array can be sorted by picking only corner elements i.e., 
 * elements either from left or right side of the array can be chosen.
 * 
 * Examples:
 * 
 * Input: arr[] = {2, 3, 4, 10, 4, 3, 1}
 * Output: Yes Explanation:
 * The order of picking elements from the array and placing in the sorted array are as follows:
 * {2, 3, 4, 10, 4, 3, 1} -> {1}
 * {2, 3, 4, 10, 4, 3} -> {1, 2}
 * {3, 4, 10, 4, 3} -> {1, 2, 3}
 * {4, 10, 4, 3} -> {1, 2, 3, 3}
 * {4, 10, 4} -> {1, 2, 3, 3, 4}
 * {10, 4} -> {1, 2, 3, 3, 4, 4}
 * {10} -> {1, 2, 3, 3, 4, 4, 10}
 * 
 * Input: a[] = {2, 4, 2, 3}
 * Output: No
 * 
 */

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr, int n) {
    int s = arr.size();
    bool flag = false;
    for (int i = 1; i < s; i++) {
        if (arr[i-1] > arr[i]) {
            flag = true;
        }
        if (arr[i-1] < arr[i] && flag) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> a1 = {1,2,3,4,5,6};     //  true
    vector<int> a2 = {1,2,3,6,5,4};     //  true
    vector<int> a3 = {6,5,4,3,2,1};     //  true
    vector<int> a4 = {6,5,4,17,20,21};  //  false
    vector<int> a5 = {6,5,17,15,21,16}; //  false
    if (isSorted(a5, 6)) {
        cout << "Array is sorted\n";
    }
    else cout << "Array is not sorted\n";
    return 0;
}