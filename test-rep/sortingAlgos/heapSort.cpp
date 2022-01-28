#include <iostream>
using namespace std;


void maxHeapify(double*, int, int);
void heapSort(double*, int);

int main() {

    double ar[] = {5, 1, 2, 3, 4, 46, 5, 1};
    heapSort(ar, 8);

    cout << "Sorted array is: ";
    for (int i = 0; i < 8; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}


void maxHeapify(double* arr, int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] > arr[largest])
		largest = l;

	if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		maxHeapify(arr, n, largest);
	}
}

void heapSort(double* arr, int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		maxHeapify(arr, n, i);

	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		maxHeapify(arr, i, 0);
	}
}