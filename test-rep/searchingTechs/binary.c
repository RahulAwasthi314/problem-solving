#include <stdio.h>
#include "binary_search.h"

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	int key;
	scanf("%d", &key);

	int result = binary_search(arr, key, n);
	if (result == -1) {
		printf("Key not found in the array");
	}
	else {
		printf("\n%d position in array\n",result+1);
	}
	return 0;
}
