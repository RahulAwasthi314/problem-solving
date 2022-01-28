// we can modify linear search to find a char in string 
// some void ptrs, function pointers and it's a magic...

int linear_search(int* arr, int key, int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		if (key == arr[i]) {
			return i;
		}
	}
	if (i == size) {
		return -1;
	}
}