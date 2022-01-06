/**
 * @file BUYPLSE.c
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.codechef.com/CCSTART2/problems/BUYPLSE/
 * 
 */

#include <stdio.h>

int main(void) {
	int a, b, x, y;
	scanf("%d%d%d%d", &a, &b, &x, &y);
	int res = a * x + b * y;
	printf("%d", res);
	return 0;
}