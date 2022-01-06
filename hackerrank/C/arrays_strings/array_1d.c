/**
 * @file array_1d.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/1d-arrays-in-c
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int sum = 0;
    scanf("%i", &n);
    int *arr = (int) malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i)
    {
        scanf("%i", &arr[i]);
        sum += arr[i];
    }
    printf("%i", sum);
    return 0;
}
