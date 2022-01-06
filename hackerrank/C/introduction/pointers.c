/**
 * @file pointers.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/pointer-in-c/
 * 
 */

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int temp = *a;
    *a = temp + *b;
    *b = abs(temp - *b);  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
