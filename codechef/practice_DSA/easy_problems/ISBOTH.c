/**
 * @file ISBOTH.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/ISBOTH
 * 
 */

#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);
    int num1 = num % 5;
    int  num2 = num % 11;

    if (num1 == 0 && num2 == 0) printf("BOTH");

    else if (num1 == 0 || num2 == 0) printf("ONE");

    else printf("NONE");

	return 0;
}