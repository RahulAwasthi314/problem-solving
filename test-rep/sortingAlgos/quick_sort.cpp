#include <iostream>
using namespace std;


void swap(double*, int, int);
int partition(double*, int, int);
void quickSort(double*, int, int);


int main() {

    double ar[] = {5,4,3,2,1};
    quickSort(ar, 0, 4);

    cout << "Sorted array is: ";
    for (int i = 0; i < 5; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}


/*
 * Quick Sort
// Time Complexity: O(n log n) {avg case}
 */

void swap(double* arr, int i, int j) {
    double t = *(arr + i);
    *(arr + i) = *(arr + j);
    *(arr + j) = t;
}


// quickSort 
// Time Complexity: O(log n)
void quickSort(double* arr, int p, int r) {
    if (p < r) {
        int q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}

// partition logic
// Time Complexity : O(n)
int partition(double* arr, int p, int r) {
    int i = p - 1;
    double x = arr[r];
    for (int j = p; j < r; j++) {
        if (arr[j] <= x) {
            swap(arr, ++i, j);
        }

    }
    swap(arr, i+1, r);
    return i+1;
}
