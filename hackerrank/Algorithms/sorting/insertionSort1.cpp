/**
 * @file insertionSort1.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/insertionsort1/
 * 
 */

void insertionSort1(int n, vector<int> arr) {
    int size = arr.size();
    int key = arr[arr.size()-1];
    // cout << key ;
    for (int i = size-2; i >= 0; i--) {
        if (arr[i] > key) arr[i+1] = arr[i];
        else {
            arr[i+1] = key;
            break;
        }
        for (auto i : arr) cout << i << " ";
            cout << endl;
    }
    if (arr[0] == arr[1]) arr[0] = key;
    for (auto i : arr) cout << i << " ";
        cout << endl;
}