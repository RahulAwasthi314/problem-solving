#include <iostream>
#include <vector>
using namespace std;

int linSearch(vector<int>& arr, int pos, int target) {
    if (pos == arr.size()) return -1;
    if (arr[pos] == target)  return pos;
    return linSearch(arr, pos+1, target);
    
}

int main() {
    vector<int> arr = {1,2,3,4};
    int target = 4;
    int pos = 0;
    pos = linSearch(arr, pos, target);
    cout << pos;
}