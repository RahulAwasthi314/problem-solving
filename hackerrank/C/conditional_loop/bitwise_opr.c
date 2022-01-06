/**
 * @file bitwise_opr.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/bitwise-operators-in-c
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
/*
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55
*/


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int temp_and = 0;
    int temp_or = 0;
    int temp_xor = 0;
    int and = 0;
    int or = 0;
    int xor = 0;
    for(int i = 1; i < n; ++i)
    {
        for(int j = i + 1; j <= n; ++j)
        {
            temp_and = i & j;
            temp_or = i | j;
            temp_xor = i ^ j;
            if (temp_and < k)
            {
                if (and <= temp_and)
                {
                    and = temp_and;
                    //printf("%d\n", and);
                }
            }
            if (temp_or < k)
            {
                if (or <= temp_or)
                {
                    or = temp_or;
                    //printf("%d\n", or);
                }
            }
            if (temp_xor < k)
            {
                if (xor <= temp_xor)
                {
                    xor = temp_xor;
                    //printf("%d\n", xor);
                }
            }            
        }
    }
    printf("%d\n%d\n%d\n", and, or, xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}