#include <iostream>
void mergeSort(double*, int, int);
void merge(double*, int, int, int);

#define RAND_LIMIT 100
#define MAX_VALUE 10


using namespace std;

int main () {
    srand(time(NULL));
    double arr[10] = {0};
    // assigning the random values to array 
    for (int i = 0; i < MAX_VALUE; i++) {
        arr[i] = rand() % RAND_LIMIT;
    }

    for (int i = 0; i < MAX_VALUE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl<< endl;;

    mergeSort(arr, 0, MAX_VALUE - 1);

    for (int i = 0; i < MAX_VALUE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


void mergeSort(double* arr, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSort(arr, p, q);
        mergeSort(arr, q+1, r);
        merge(arr, p, q, r);
    }
}


void merge(double* arr, int p, int q, int r) {
    int l = q - p + 1, m = r - q;
    double a[l], b[m];

    int i = 0, j = 0;
    while (i < l) {
        a[i] = arr[p + i];
        i++;
    }
    while (j < m) {
        b[j] = arr[q + 1 + j];
        j++;
    }

    i = 0; j = 0;
    int k = p;

    while (i < l and j < m) {
        if (a[i] < b[j]) arr[k++] = a[i++];
        else arr[k++] = b[j++];
    }
    while (i < l) {
        arr[k++] = a[i++];
    }
    while (j < m) {
        arr[k++] = b[j++];
    }
}