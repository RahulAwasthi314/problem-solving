/**
 * @file loopInvariant.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/correctness-invariant/
 */

void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i = 1; i < N; i++) {
        value = arr[i];
        j = i - 1;
        while (j >= 0 && value < arr[j]) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1]=value;
    }
    for(j = 0;j < N; j++)
    {
        printf("%d",arr[j]);
        printf(" ");
    }
}