#include <vector>
#include <iostream>
using namespace std;

void insertionSort(vector<int>& arr) {
    int length = arr.size();
    // consider first element as sorted
    for (int i = 1; i < length; i++) {
        // pick the next element from unsorted element
        int key = arr[i];
        // implement the insertion logic to insert it in correct position
        // get the index of element before it
        int j = i - 1;
        int temp_ctr = 0;
        while (j >= 0 and key < arr[j]) {
            arr[j+1] = arr[j];
            temp_ctr += 1;
            j--;
        }
        // if the while loo never executes. following statement is of no use
        arr[j+1] = key;
    }
}

int main() {
    vector<int> arr{2, 1, 3, 1, 2};
    // vector<int> arr{1,2,3,4,5};
    insertionSort(arr);
    cout << "These are sorted Elements:-\n";
    for (auto digit : arr) {
        cout << digit << " ";
    }
    cout << endl;
    return 0;
}