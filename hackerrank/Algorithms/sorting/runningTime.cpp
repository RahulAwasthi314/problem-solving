/**
 * @file runningTime.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/runningtime/
 * 
 */


int runningTime(vector<int> arr) {
    int shift = 0;
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 and key < arr[j]) {
            arr[j+1] = arr[j];
            j--;
            shift++;
        }
        arr[j+1] = key;
    }
    for (auto i : arr) cout << i << " ";
    return shift;
}
