#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int>& arr, int temp) {
    if (arr.size() == 0 || arr[arr.size()-1] <= temp) {
        arr.push_back(temp);
        return;
    }

    int x = arr[arr.size()-1];
    arr.pop_back();
    insert(arr, temp);
    arr.push_back(x);
    return;
}

void sorting(vector<int>& arr) {
    if (arr.size() == 1) {
        return;
    }
    int x = arr[arr.size()-1];
    arr.pop_back();

    sorting(arr);
    insert(arr, x);
    return;
}



int main() {
    vector<int> a = {3,2,1,0};
    sorting(a);
    for (int i : a) cout << i << " ";
    return 0;
}