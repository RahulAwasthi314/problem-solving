#include <iostream>
#include <vector>
using namespace std;

// Space: O(n), Time: O(n)
void bucketSort(vector<int>& arr, int n) {
    // to be implemented
    vector<int> fre(arr.size(), 0);
    vector<int> res(arr.size(), 0);
    for (int i = 0; i < arr.size(); i++) {
        fre[arr[i]] += 1;
    }
    for (int j = arr.size() - 1; j >= 0; j--) {
        res[fre[arr[j]]] = arr[j];
        fre[arr[j]] -= 1;
    }
}


// Space: O(1), Time: O(n)
void threeptr(vector<int>& arr, int n) {
    // assign three pointers
    int begin = 0, i = 0, end = n-1;
    while (i <= end) {
        if (arr[i] == 1) i++;
        else if (arr[i] == 2) {
            int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            end--; 
        }
        else if (arr[i] == 0) {
            int temp = arr[i];
            arr[i] = arr[begin];
            arr[begin] = temp;
            begin++; i++;
        }
    }
}

int main() {
    int n = 7;
    vector<int> a = {1,0,0,2,1,2,2};
    threeptr(a, n);
    cout << "Sorted elements are: ";
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}